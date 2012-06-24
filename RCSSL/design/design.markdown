Module Design Notes
===================

Design notes on the the design (methods, classes) within each module, does NOT reflect the final product.

Communication
-------------
+ Action, contins methods that return a Command (a string)
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
	
