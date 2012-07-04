#ifndef __VECTOR3D_H__
#define __VECTOR3D_H__

namespace Physics{

    /*!
     *    \class    Vector3D
     *    \brief    a representation of the physical vector in 3 dimensions
     */
    class Vector3D{
      private:
        double x_;       /*!< The x value of the vector */
        double y_;       /*!< The y value of the vector */
        double z_;       /*!< The z value of the vector */
        
      public:
        
        /*!
         *    \brief        default constructor
         *    \param        none
         *    \details      nothing special
         */
        Vector3D();
        
        /*!
         *    \brief        initializing constructor
         *    \param        x The x value
         *    \param        y The y value
         *    \param        z The z value
         *    \details      initializes the vector with the values [x, y, z]
         */
        Vector3D(double x, double y, double z);
            
        /*!
         *    \brief        default destructor
         *    \param        none
         *    \details      nothing special
         */    
        virtual ~Vector3D();
        
        /*! 
         *  \fn         x
         *  \brief      getter function for x_
         *  \details
         *  \param      none
         *  \return     double, the value of x_
         *  \bug        none
         *  \warning    none
         */
        double x() const;
        
        /*! 
         *  \fn         y
         *  \brief      getter function for y_
         *  \details        
         *  \param      none
         *  \return     double, the value of y_
         *  \bug        none
         *  \warning    none
         */
        double y() const;
        
        /*! 
         *  \fn         z
         *  \brief      getter function for z_ 
         *  \details
         *  \param      none
         *  \return     double, the value of z_
         *  \bug        none
         *  \warning    none
         */
        double z() const;
        
        /*! 
         *  \fn         magnitude
         *  \brief      returns the magitude of the vector
         *  \details
         *  \param      none
         *  \return     double, the magitude of the vector
         *  \bug        none
         *  \warning    none
         */
        double magnitude();
        
        /*! 
         *  \fn         unitVector
         *  \brief      returns a Vector3D that is the normalized version of this vector
         *  \details
         *  \param      none
         *  \return     Vector3D, an unit vector in the same direction
         *  \bug        none
         *  \warning    none
         */
        Vector3D unitVector();
        
        /*! 
         *  \fn         operator+
         *  \brief      overloaded addition operator
         *  \details
         *  \param      rhs the Vector3D to be added
         *  \return     const Vector3D
         *  \bug        none
         *  \warning    none
         */
        const Vector3D operator+(const Vector3D &rhs) const;
        
        /*! 
         *  \fn         operator-
         *  \brief      overloaded subtraction operator
         *  \details
         *  \param      rhs the Vector3D to be subtracted
         *  \return     const Vector3D
         *  \bug        none
         *  \warning    none
         */
        const Vector3D operator-(const Vector3D &rhs) const;
        
        /*! 
         *  \fn         dot
         *  \brief      returns the dot product of the two vectors
         *  \details
         *  \param      rhs the second vector to perform the dot product with
         *  \return     double, the dot product of the two vectors
         *  \bug        none
         *  \warning    none
         */
        double dot(const Vector3D &rhs);
        
        /*! 
         *  \fn         cross
         *  \brief      returns the cross product of the two vectors
         *  \details
         *  \param      the second vector to perform the cross product with
         *  \return     Vector3D, the cross product of the two vectors
         *  \bug        none
         *  \warning    none
         */
        Vector3D cross(const Vector3D &rhs);
    };

};

#endif /* __VECTOR3D_H__ */

