#ifndef __FIELDSTATE_H__
#define __FIELDSTATE_H__

#include <vector>
#include "../Movable/Robot.h"
#include "../Movable/Ball.h"

namespace Game{

    /*!
     *    \class    FieldState
     *    \brief    the current state of what's on the field
     */
    class FieldState{
      private:
        std::vector<Movable::Robot> allies_;            /*!< the list of all allied robots */
        std::vector<Movable::Ball> enemies_;            /*!< the list of all enemy robots */
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        FieldState();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~FieldState();
    };
    
};


#endif /* __FIELDSTATE_H__ */

