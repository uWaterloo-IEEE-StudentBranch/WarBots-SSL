#ifndef __VECTOR3D_H__
#define __VECTOR3D_H__

/*!
 *    \class    Vector3D
 *    \brief    a representation of the physical vector in 3 dimensions
 */
class Vector3D{
  public:
    
    double x_;       /*!< The x value of the vector */
    double y;       /*!< The y value of the vector */
    double z;       /*!< The z value of the vector */
    
    /*!
     *    \brief        default constructor
     *    \param        none
     *    \details      nothing special
     */
    Vector3D();
    
    /*!
     *    \brief        initializing constructor
     *    \param        The x value
     *    \param        The y value
     *    \param        The z value
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
     *  \fn         magnitude
     *  \brief      returns the magitude of the vector
     *  \details
     *  \param      none
     *  \return     double
     *  \bug        none
     *  \warning    none
     */
    double magnitude();
    
    /*! 
     *  \fn         unitVector
     *  \brief      
     *  \details
     *  \param      none
     *  \return     Vector3D
     *  \bug        none
     *  \warning    none
     */
    Vector3D unitVector();
    

  private:
    
};

#endif /* __VECTOR3D_H__ */

