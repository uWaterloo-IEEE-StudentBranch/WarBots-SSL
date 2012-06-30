#ifndef __ROBOT_H__
#define __ROBOT_H__

#include "Movable.h"
#include "../Role/Role.h"

/*!
 *    \class    Robot
 *    \brief    the robot class that corresponds to the physical robot
 */
class Robot: public Movable{
  private:
    int ID_;                    /*!< the ID of the robot */
    Role role_;                 /*!< the role that this robot is currently undertaking */
    
  public:
  
    /*!
     *    \brief        default constructor
     *    \param        none
     *    \details      nothing special
     */
    Robot();
        
    /*!
     *    \brief        default destructor
     *    \param        none
     *    \details      nothing special
     */    
    virtual ~Robot();
    
    /*! 
     *  \fn         ID
     *  \brief      getter function for ID_
     *  \details
     *  \param      none
     *  \return     int, the value of ID_
     *  \bug        none
     *  \warning    none
     */
    int ID();
    
    /*! 
     *  \fn         role
     *  \brief      getter function for role_
     *  \details
     *  \param      none
     *  \return     Role*, a pointer to role_
     *  \bug        none
     *  \warning    none
     */
    Role* role();
    
};

#endif /* __ROBOT_H__ */

