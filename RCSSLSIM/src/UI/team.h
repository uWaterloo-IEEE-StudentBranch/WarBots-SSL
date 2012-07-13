#ifndef TEAM_H
#define TEAM_H

#include "circles.h"
#include <qvector.h>
#include <qgraphicsscene.h>

class Team{
private:
	int nMembers;
	int offset;
	QVector<Circle*> team;
	QColor color;
public:
	void addToScene(QGraphicsScene &s);
	Team(int n, QColor c, int offset);
	Team(int n, QColor c);
	~Team();
};

#endif