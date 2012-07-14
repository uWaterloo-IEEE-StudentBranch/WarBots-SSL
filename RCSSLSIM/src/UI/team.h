#ifndef TEAM_H
#define TEAM_H

#include "circles.h"
#include <qvector.h>
#include <qgraphicsscene.h>

/*!
 *    \class    Team
 *    \brief    class representing a team of robots (UI)
 */
class Team{
private:
	int nMembers;                   /*!< the number of robots in the team */
	int offset;                     /*!< the offset used to initialize robot position */
	QVector<Circle*> team;          /*!< the list of robot pointers (represented by circles) */
	QColor color;                   /*!< the team colour */
public:
	void addToScene(QGraphicsScene &s);
	
	/*! 
	 *    \fn         setPos
	 *    \brief      sets the position of a robot (id) in the team
	 *    \details
	 *    \param      id, the id of the robot to move
     *    \param      x, the new x coordinate of the robot numbered id
     *    \param      y, the new y coordinate of the robot numbered id
	 *    \return     void
	 *    \bug        none
	 *    \warning    none
	 */
	void setPos(int id, int x, int y);
	
    /*!
     *    \brief        constructor with offset
     *    \param        n, the number of robots to initialize
     *    \param        c, the colour to assign to this team
     *    \param        offset, the offset use to initialize positions
     *    \details      declares new Circle objects as robots
     */
	Team(int n, QColor c, int offset);
	
	/*!
     *    \brief        constructor without offset
     *    \param        n, the number of robots to initialize
     *    \param        c, the colour to assign to this team
     *    \details      declares new Circle objects as robots
     */
	Team(int n, QColor c);
	
	/*!
     *    \brief        default destructor
     *    \param        none
     *    \details      deallocates circle objects
     */
	~Team();
};

#endif
