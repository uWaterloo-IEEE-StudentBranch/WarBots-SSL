RCSSLSIM
========

RoboCup Small-Size League Simulator and Play-Logger

Project Design
--------------
+ Basic [layout](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/RCSSLSIM/design/layout.png) of the UI
+ [Features](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/RCSSLSIM/design/features.markdown) to be developed
+ Module [design notes](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/RCSSLSIM/design/design.markdown)

Project Structure
-----------------

    WarBots::RCSSLSIM
        Communication
        Proto
        Object
            Object
        Movable
            Movable
            Ball
            Robot
        Immovable
            Immovable
            Goal
        Physics
            Vector3D
        World
            World
        UI
        Log
        Replay
        SimLog

Developers
----------
Click to see the [duties and tasks](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/Documents/duties_SSL.markdown) of each specialist.
+ Vision Specialist (camera setup, calibration)
    + Salar Ali Mumtaz
    + Vincent Chau
    + Michael Chi
    + Eugene Chung
+ Communication Specialist (sockets, network protocol, wifi, radio, protobuf)
    + Salar Ali Mumtaz
    + Vincent Chau
    + Tony Wu
    + Austin Lee
+ Hardware Integration Specialist (on-board code, drivetrain and sensor API)
    + Cong Wang
    + Tony Wu
    + Tony Li
    + Michael Chi
    + Eugene Chung
    + Matthew Chan
+ UI Specialist (QT, openGL)
    + Vincent Chau
    + Anton Diaz
    + Lawrence Fu
    + Nicole Jiang
    + Salar Ali Mumtaz
    + Austin Lee
+ AI Specialist (multi-agent system, may be broken down to defensive and offensive)
    + Cong Wang
    + Michael Chi
    + Tony Wu
    + Tony Situ
    + Austin Lee
+ Optimization Specialist (C, assembly, algorithms)
    + Cong Wang
    + Anton Diaz
    + Tony Wu
    + Tony Situ
    + Austin Lee
+ Physics Specialist (newtonian physics)
    + Cong Wang
+ Gameplay Specialist (soccer gameplay, SSL metagame, strategy design)
    + Salar Ali Mumtaz
    + Vincent Chau
    + Cong Wang
    + Anson Ho
    + Lawrence Fu
    + Eugene Chung
+ General
    + Kyle - vision, communication, UI, AI, optimization, physics, gameplay
