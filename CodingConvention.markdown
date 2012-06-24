Coding Convention
=================

Coding Conventions used in all of WarBots' coding projects

Namespacing
-----------
WarBots::{project}::{module}
+ ex. /RCSSLSIM/Movable/Ball.h -> WarBots::RCSSLSIM::Movable::Ball

Documentation
-------------
We will document using [doxygen](http://www.doxygen.org), a list of tags can be found [here](http://www.stack.nl/~dimitri/doxygen/commands.html).

Our templates (for setting up your own text editors, is as follows):
If you're using gedit, you can find a snippet tar ball [here](https://github.com/uWaterloo-IEEE-StudentBranch/WarBots-CodeRepo/blob/master/Documents/SnippetCplusplus.tar.gz).
#### File
    /*!
     * \file     [File Name]
     * \author   [Your Name]
     * \date     [Current Year]
     * \brief    [Brief Description of the File]
     */
For example:  
    /*!
     * \file     CodingConvention.markdown
     * \author   Cong Wang
     * \date     2012
     * \brief    Outlines the coding conventions use in WarBots
    */
#### Inline comments
    /*! [This describes the variable on the line after] */
For example:  
    /*! The ID of the Robot */
    int id;
#### Post-line comments
    /*!< [This describes the variable on the same line] */
For example:  
    int id;     /*!< The ID of the Robot */
#### Namespace
#### Classes
#### Functions
#### Structs
#### Enums
