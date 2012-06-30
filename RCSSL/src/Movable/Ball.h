#ifndef __BALL_H__
#define __BALL_H__

#include "Movable.h"

/*!
 *    \class    Ball
 *    \brief
 */
class Ball: public Movable{
  private:
    
    
  public:
  
    /*!
     *    \brief        default constructor
     *    \param        none
     *    \details      nothing special
     */
    Ball();
        
    /*!
     *    \brief        default destructor
     *    \param        none
     *    \details      nothing special
     */    
    virtual ~Ball();
};

#endif /* __BALL_H__ */

