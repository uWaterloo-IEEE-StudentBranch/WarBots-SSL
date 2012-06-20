Duties and Tasks Breakdown
==========================

For projects [RCSSL](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/RCSSL/)
    (RoboCup Small-Size League) and [RCSSLSIM](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/RCSSLSIM/)
    (RoboCup Small-Size League Simulator and Play-Logger)

References to the male gender in this document with respect to specialists are used for simplification purposes and refer to both genders.

Vision Specialist
-----------------
The vision specialist is responsible for all setup and calibration of the unique SSL vision system.
This includes and not limited to:
+ the setup and coding of the dedicated vision computer to ensure the vision packets are broadcasted properly

Communication Specialist
------------------------
The communication special is responsible for setting up communication protocols and interfaces for information exchange.
This includes and not limited to:
+ retrieval of vision packets from the broadcast computer
+ API for sending and receiving between programs (e.g., coach and simulator)
+ wifi and radio communication, drivers
+ on-board communication API for integration specialists

Hardware Integration Specialist
-------------------------------
The hardware integration specialist is responsible for all on-board control code with the exception of communication API.
This includes and not limited to:
+ design of command class to be sent by off-field coach
+ robot API for generating such command class and packet
+ parsing command packets and carrying out corresponding commands
+ sensor feedback broadcast back to coach

UI Specialist
-------------
The UI specialist is responible for the visible component of RCSSLSIM.
This includes and not limited to:
+ design of an user interface
+ provide API for updating visible content
+ handle interactive inputs (e.g., mouse click, mouse drag, keyboard inputs)


AI Specialist
-------------
The AI specialist is responible for the gameplay of WarBots SSL and the coding of the off-field coach.
This includes and not limited to:
+ develop a multi-agent decision models
+ analysis of raw vision input
+ constraint programming 

Optimization Specialist
-----------------------
The optimization specialist is responsible for modifications to the off-field coach to achieve better time/space complexity.
This includes and not limited to:
+ using C and assembly to speed up computation
+ adapt more efficient algorthm or implementation of an algorithm based on constrained inputs
+ ensuring the correctness of any optimized function
+ profiling of functions (registering the frequency they are called)
+ analysis of runtime of critical functions

Physics Specialist
------------------
The physics specialist is responible for a physics model that is accurate and efficient enough for real time analysis.
This includes and not limited to:
+ efficient simulation model for friction and airdrag
+ path prediction based on a series of data

Gameplay Specialist
-------------------
The gameplay specialist is responsible for development of new strategies used in the decision model of the AI specialist
This includes and not limited to:
+ analysis of current RoboCup SSL metagame and playstyle
+ determine feasibility of implementing certain strategies from the real soccer gameplay

General
-------
The general developer will help specialists of their chosen aspects on demand, with less time commitment.
This includes and not limited to:
+ Kyle Olive
