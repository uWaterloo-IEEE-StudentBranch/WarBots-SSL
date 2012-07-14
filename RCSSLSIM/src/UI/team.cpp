#include "team.h"
#include <qgraphicsscene.h>

void Team::addToScene(QGraphicsScene &s){
	for(int i = 0; i < nMembers; i++){
		s.addItem(team[i]);
	}
}

Team::Team(int n, QColor c, int o): color(c){
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
    team[id]->setPos(x, y);
}

void Team::setPos(FieldStateMessage &fsm){
    double FieldStateRatioX = 100;
	double FieldStateRatioY = 100;
	
	//code
}

void Team::setPos(SSL_DetectionFrame &df){
	double SSLDectectionRatioX = 740/6000;
	double SSLDectectionRatioY = 540/4000;
	
    if(df.balls_size() > 0){
        //can't draw balls yet
    }
    
    if(color.green() == 0){         //blue
        for(unsigned int i = 0; i < df.robots_blue_size(); i += 1){
            team[i]->setPos((df.robots_blue(i).x() + 3000) * SSLDectectionRatioX, 
                            (df.robots_blue(i).y() + 2000) * SSLDectectionRatioY);
            
        }
    }
    else{                           //yellow
        for(unsigned int i = 0; i < df.robots_yellow_size(); i += 1){
            team[i]->setPos((df.robots_yellow(i).x() + 3000) * SSLDectectionRatioX, 
                            (df.robots_yellow(i).y() + 2000) * SSLDectectionRatioY);
            
        }
    }
}

Team::~Team(){
	for(int i = 0; i < nMembers; i++){
		delete team[i];
	}
}
