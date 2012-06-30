Module Design Notes
===================

Design notes on the the design (methods, classes) within each module, does NOT reflect the final product.

Proto
-----
+ CommandPacket (Commands are generated solely from Actions)
	+ Robot1 -> Command[]
	+ Robot2 -> Command[]
	+ ...
	+ Info[], current strategy, role distrubution

World
-----
+ holds server parameters
    + connection infomation (multicast addresses)
    + simulation cycle time (time between frames in the physics engine)
    + simulation display time (time between frames to be displayed on UI)
    + ground frictional variable
    + air drag coefficient
    + gravity variable
    + dribbler attraction strength

Physics
-------
+ basic unit definitions
    + scalar (alias for double)
    + vector3d
        + overload operators
        + dot product
        + cross product
        + magnitude
        + unit_vector
    + position : vector
    + speed : vector
    + acceleration : vector
    + force : vector
+ useful math and physics functions
    + linear fitting
    + quadradtic fitting
    + spline fitting
    + beta spline fitting
