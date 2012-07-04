#ifndef __IMMOVABLE_H__
#define __IMMOVABLE_H__

#include "../Physics/Vector3D.h"
#include "../Objects/Object.h"

namespace Immovable{
    
    /*!
     *    \class    Immovable
     *    \brief    generic class for objects that are fixed
     */
    class Immovable: public Object::Object{
      private:
        
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        Immovable();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~Immovable();
    };

};

#endif /* __IMMOVABLE_H__ */

