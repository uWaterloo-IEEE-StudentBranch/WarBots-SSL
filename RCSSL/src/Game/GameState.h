#ifndef __GAMESTATE_H__
#define __GAMESTATE_H__

#include "FieldState.h"
#include "GameMode.h"
#include "../Strategy/Strategy.h"

/*!
 *    \class    GameState
 *    \brief    wrapper class that holds all info of the game at a time
 */
class GameState{
  private:
    FieldState fieldstate_;         /*!< the state of the field at this timestep */
    GameMode gamemode_;             /*!< the current game mode at this timestep */
    Strategy strategy_;             /*!< the current strategy at this timestep */
    
  public:
  
    /*!
     *    \brief        default constructor
     *    \param        none
     *    \details      nothing special
     */
    GameState();
        
    /*!
     *    \brief        default destructor
     *    \param        none
     *    \details      nothing special
     */    
    virtual ~GameState();
};

#endif /* __GAMESTATE_H__ */

