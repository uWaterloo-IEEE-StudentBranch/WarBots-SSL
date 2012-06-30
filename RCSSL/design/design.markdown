Module Design Notes
===================

Design notes on the the design (methods, classes) within each module, does NOT reflect the final product.

Game
----
+ GameState
	+ GameMode
	+ FieldState
		+ Ball[]
		+ Robot[]	//yellow
		+ Robot[]	//blue
+ currentState
+ currentInfo
+ update(CommandPacket)
	+ updateField(CommandPacket)
	+ updateInfo(CommandPack)
		
Immovable
---------
+ holds class that represent immovable objects
	+ Field
	+ Goal

Movable
-------
+ holds class that movable
	+ Ball
	+ Robot
		+ kickMode
+ contains common traits
	+ position : vector3d
	+ velocity : vector3d
	+ predict(Time t)

Communication
-------------
+ Action, contains methods that return a Command (a string)
	+ changeVelocity(x, y, w)
	+ kick(speed)
	+ toggleKickMode()
	+ stop()
	+ halt(), discharges capacitors
	+ poweroff()

Proto
-----
+ CommandPacket (Commands are generated solely from Actions)
	+ Robot1 -> Command[]
	+ Robot2 -> Command[]
	+ ...
	+ Info[], current strategy, role distrubution
	
