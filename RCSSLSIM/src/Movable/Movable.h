#ifndef __MOVABLE_H__
#define __MOVABLE_H__

#include "../Physics/Vector3D.h"
#include "../Objects/Object.h"

namespace Movable{
    
    /*!
     *    \class    Movable
     *    \brief    generic class for objects that can move
     */
    class Movable{
      private:
        Physics::Vector3D position_;         /*!< a vector describing the position of the robot on the field */
        Physics::Vector3D velocity_;         /*!< a vector describing the velocity of the robot */
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        Movable();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~Movable();
        
        /*! 
         *  \fn         position
         *  \brief      getter function for position_
         *  \details
         *  \param      none
         *  \return     Vector3D, a copy of the position_ variable
         *  \bug        none
         *  \warning    none
         */
        Vector3D position();
        
        /*! 
         *  \fn         velocity
         *  \brief      getter function for velocity_
         *  \details
         *  \param      none
         *  \return     Vector3D, a copy of the velocity_ variable
         *  \bug        none
         *  \warning    none
         */
        Vector3D velocity();
    };

};

#endif /* __MOVABLE_H__ */

