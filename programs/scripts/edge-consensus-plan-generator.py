import logging
import sys

import imcpy
from imcpy.actors.dynamic import DynamicActor
from imcpy.decorators import Periodic, Subscribe

class PlanActor(DynamicActor):
    def __init__(self, target_name, timeout):
        """
        Initialize the actor
        :param target_name: The name of the target system
        """
        super().__init__()

        # Initialize local variables
        self.target = target_name
        self.db_reqid = 0  # Optional number that is incremented for requests

        # This list contains the target systems to maintain communications with
        self.heartbeat.append(target_name)

        self._connected = False
        self._timetout = timeout

    @Periodic(10.0)
    def req_plandb(self):
        """
        Request the plan database every ten seconds if the system is connected.
        :return: None
        """
        # Check if target system is currently connected
        try:
            # This function resolves the map of connected nodes
            node = self.resolve_node_id(self.target)

            # Request the PlanDB state
            logging.debug("Requesting PlanDB state from target.")
            db_req = imcpy.PlanDB()

            # Enumerations are exposed as a subclass of the message
            db_req.type = imcpy.PlanDB.TypeEnum.REQUEST
            db_req.op = imcpy.PlanDB.OperationEnum.GET_STATE  # Note: DSTATE does not seem to work as intended
            db_req.request_id = self.db_reqid
            self.db_reqid += 1

            # Send the IMC message to the node
            self.send(node, db_req)

        except KeyError as e:
            # Target system is not connected
            logging.debug('Target system is not connected.')

    @Periodic(10.)
    def send_plan(self):
        """
        Once the actor receives plan information, it sends a SetPlan request
        """
        if self._connected:
            logging.debug("Sending plan to target.")
            fref = imcpy.FollowReference()
            fref.control_src = 0xffff
            fref.control_ent = 0xff
            fref.timeout = self._timetout
            fref.loiter_radius = 15.
            fref.altitude_interval = 2.

            man = imcpy.PlanManeuver()
            man.maneuver_id = "1"
            man.data = fref

            plan_spec = imcpy.PlanSpecification()
            plan_spec.plan_id = "follow_ntnu"
            plan_spec.description = "dummy FollowRef maneuver"
            plan_spec.start_man_id = "1"
            plan_spec.maneuvers.append(man)

            db_req = imcpy.PlanDB()
            db_req.type = imcpy.PlanDB.TypeEnum.REQUEST
            db_req.op = imcpy.PlanDB.OperationEnum.SET
            db_req.request_id = self.db_reqid
            self.db_reqid += 1
            db_req.plan_id = "follow_ntnu"
            db_req.arg = plan_spec
            db_req.info = "sent from imcpy"

            try:
                # This function resolves the map of connected nodes
                node = self.resolve_node_id(self.target)
                self.send(node, db_req)
            except KeyError as e:
                pass

    @Subscribe(imcpy.PlanDB)
    def recv_plandb(self, msg: imcpy.PlanDB):
        try:
            # Check if message originates from the target system
            node = self.resolve_node_id(self.target)
            if msg.src == node.id:
                # Check for a successful PlanDB request of the correct type
                if msg.type == imcpy.PlanDB.TypeEnum.SUCCESS and msg.op == imcpy.PlanDB.OperationEnum.GET_STATE:
                    dbstate = msg.arg  # type: imcpy.PlanDBState

                    # The IMC MessageList type interface is designed to be as close to a python list as possible
                    # It has support for iteration, indexing, slicing, append, extend, len, in
                    # The caveat is that it cannot be assigned to from a list (use append, clear, extend instead)
                    plan_names = [p.plan_id for p in dbstate.plans_info]
                    logging.info('Target system has the following plans: {}'.format(plan_names))
                    self._connected = True

        except KeyError as e:
            pass


if __name__ == '__main__':
    # Setup logging level and console output
    logging.basicConfig(stream=sys.stderr, level=logging.DEBUG)

    # Create an actor, targeting the lauv-simulator-1 system
    actor = PlanActor('lauv-simulator-1', 600.)

    # This command starts the asyncio event loop
    actor.run()
