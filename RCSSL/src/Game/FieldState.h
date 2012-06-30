#ifndef __FIELDSTATE_H__
#define __FIELDSTATE_H__

#include "../Movable/Robot.h"
#include "../Movable/Ball.h"

/*!
 *    \class    FieldState
 *    \brief    class containing the current field info (wrapper for SSLDetection)
 */
class FieldState{
  private:
    Robot **allies_;        /*!< array of pointers to ally robots */
    Robot **enemys_;        /*!< array of pointers to enemy robots */
    
    int numAllies_;         /*!< number of allied robot in the FieldState */
    int numEnemys_;         /*!< number of enemy robot in the FieldState */
    
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

#endif /* __FIELDSTATE_H__ */

