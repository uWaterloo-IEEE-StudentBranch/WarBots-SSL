#include "team.h"
#include <qgraphicsscene.h>

void Team::addToScene(QGraphicsScene &s){
	for(int i = 0; i < nMembers; i++){
		s.addItem(team[i]);
	}
}

Team::Team(int n, QColor c,int o): color(c){
	nMembers = n;
	team.resize(nMembers);
	offset = o;
	for(int i = 0; i < nMembers; i++){
		team[i] = new Circle(c);
		team[i]->setPos(i+offset+290+i*10,i+offset+190);
	}
}

Team::Team(int n, QColor c): color(c){
	nMembers = n;
	team.resize(nMembers);
	for(int i = 0; i < nMembers; i++){
		team[i] = new Circle(c);
		team[i]->setPos(i+290+i*10,i+190);
	}
}

void Team::setPos(int id, int x, int y){
    team[i]->setPos(x, y);
}

Team::~Team(){
	for(int i = 0; i < nMembers; i++){
		delete team[i];
	}
}
