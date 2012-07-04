#ifndef __OBJECTS_H__
#define __OBJECTS_H__

#include "../Physics/Vector3D.h"

namespace Object{

    /*!
     *    \class    Object
     *    \brief    generic class for object
     */
    class Object{
      private:
        Physics::Vector3D position;         /*!< the coordinate with the lowest value in all dimensions  */
        Physics::Vector3D size;             /*!< the size of the minimal bounding box of this object */
        bool simple;                        /*!< flag for if the object is a simple rectangle */
        
      public:
      
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        Object();
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~Object();

        /*! 
         *  \fn         intersect
         *  \brief      return if two objects intersects or not
         *  \details
         *  \param      Object, the other object to test intersection
         *  \return     bool, true if the objects intersect
         *  \bug        none
         *  \warning    none
         */
        bool intersect(Object &other);
        
    };
    
};
#endif /* __OBJECTS_H__ */

