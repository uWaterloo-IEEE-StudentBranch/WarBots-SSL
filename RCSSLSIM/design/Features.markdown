Features
========

Core Functionality
------------------
+ Can wrap SSL standard packets and update field form command (simulator)
+ Can listen for SSL standard packet and log (live recorder)
+ Can load log files and replay through past games (replayer)

Main Features
-------------
+ General
    + can communicate via UDP sockets
    + can serialize/deserialize custom class information
+ Simulator
    + overhead view of the simulated game
    + has a pseudo-3D physics model with air drag
    + robots can dribble (small force applied toward the center of the robot on the ball if conditions meet)
    + refbox is integrated
    + simple collision handling, robots cannot be bumped
    + can move the positions of any robot and the ball mid-game
    + has optional slow-mo simulation
    + display statistics of current strategy (more complex command packet)
    + can display statistics of a selected robot
    + display a shot at either goal whenever there exist a clear line of sight
+ Replayer
    + has option to manually change frame
    + has option to replay backwards

Improvements
------------
+ General
+ Simulator
    + more complex collsion model based on momentum
+ Replayer
