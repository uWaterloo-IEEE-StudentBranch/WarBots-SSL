#ifndef __WORLD_H__
#define __WORLD_H__

#include "../Physics/Vector3D.h"
#include "../Objects/Object.h"

namespace World{

    /*!
     *    \class    World
     *    \brief    world class for containing everything
     */
    class World{
      private:
        Physics::Vector3D
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        World();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~World();
    };
    
};


#endif /* __WORLD_H__ */

