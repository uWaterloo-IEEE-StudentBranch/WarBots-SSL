#ifndef __GAMESTATE_H__
#define __GAMESTATE_H__

#include "FieldState.h"
#include "GameMode.h"

namespace Game{

    /*!
     *    \class    GameState
     *    \brief
     */
    class GameState{
      private:
        FieldState fieldstate_;             /*!< the field state at this time */
        GameMode gamemode_;                 /*!< the game mode currently in play */
        Team myteam_;                       /*!< the team we are associated with */
        
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
    
};


#endif /* __GAMESTATE_H__ */

