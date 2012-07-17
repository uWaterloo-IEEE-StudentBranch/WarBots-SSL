#include <QtGui/QApplication>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <qpixmap.h>
#include <qmainwindow.h>
#include <qgraphicsitem.h>
#include "team.h"
#include "circles.h"
#include "MyGraphicsView.h"

#include <cstdio>
#include <cstdlib>
#include <string>
#include <Box2D/Box2D.h>


static const int CircleCount = 7;

int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);
	
	// Set up the scene
	QGraphicsScene scene;
	QRect sceneRect(0,0,740,540);
	scene.setSceneRect(sceneRect);
	scene.setItemIndexMethod(QGraphicsScene::NoIndex);

	Team A(5,QColor(0,0,255));
	Team B(5,QColor(255,255,0),50);
	A.addToScene(scene);
	B.addToScene(scene);
	
	// Set up the view port
	MyGraphicsView v;
	v.setRenderHint(QPainter::Antialiasing);
	v.setCacheMode(QGraphicsView::CacheBackground);
	v.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
	v.setDragMode(QGraphicsView::ScrollHandDrag);
    	v.setScene(&scene);
   	v.show();
   	
   	// Call circle advance for every time interval of 1000/33
	QTimer timer;
     	QObject::connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
     	timer.start(1000 / 33);

	a.exec();
	
#ifndef __NO_BOX2D__
	B2_NOT_USED(argc);
	B2_NOT_USED(argv);

    // Define the ground body.
    b2BodyDef groundBodyDef[4];
    groundBodyDef[0].position.Set(0.0f, 2.7f);      //top
    groundBodyDef[1].position.Set(0.0f, -2.7f);     //bottom
    groundBodyDef[2].position.Set(-3.7f, 0.0f);     //left
    groundBodyDef[3].position.Set(3.7f, 0.0f);      //right

    // Call the body factory which allocates memory for the ground body
    // from a pool and creates the ground box shape (also from a pool).
    // The body is also added to the world.
    b2Body* groundBody[4];
    for(unsigned int i = 0; i < 4; i += 1){
        groundBody[i] = m_world->CreateBody(&groundBodyDef[i]);
    }

    // Define the ground box shape.
    b2PolygonShape groundBox[4];

    // The extents are the half-widths of the box.
    groundBox[0].SetAsBox(3.7f, 0.003f);
    groundBox[1].SetAsBox(3.7f, 0.003f);
    groundBox[2].SetAsBox(0.003f, 2.7f);
    groundBox[3].SetAsBox(0.003f, 2.7f);

    // Add the ground fixture to the ground body.
    for(unsigned int i = 0; i < 4; i += 1){
        groundBody[i]->CreateFixture(&groundBox[i], 0.0f);
    }

    // Define the dynamic body. We set its position and call the body factory.
    b2BodyDef bodyDef[6];
    for(unsigned int i = 0; i < 6; i += 1){
        bodyDef[i].type = b2_dynamicBody;
    }

    bodyDef[0].position.Set(1.0f, 2.0f);
    bodyDef[1].position.Set(1.0f, 0.0f);
    bodyDef[2].position.Set(1.0f, -2.0f);
    bodyDef[3].position.Set(2.0f, 1.0f);
    bodyDef[4].position.Set(2.0f, -1.0f);
    bodyDef[5].position.Set(3.0f, 0.0f);

    b2Body* body[6];
    for(unsigned int i = 0; i < 6; i += 1){
        body[i] = m_world->CreateBody(&bodyDef[i]);
        b2Vec2 pos = body[i]->GetPosition();
        body[i]->SetTransform(pos, 90.0);
    }

    // Define another box shape for our dynamic body.
    b2PolygonShape dynamicBox;
    dynamicBox.SetAsBox(0.09f, 0.09f);
    
    b2Vec2 vertices[19];
    vertices[0].Set(-0.090000f, 0.000000f);
    vertices[1].Set(-0.087385f, -0.021538f);
    vertices[2].Set(-0.079691f, -0.041825f);
    vertices[3].Set(-0.067366f, -0.059681f);
    vertices[4].Set(-0.051126f, -0.074069f);
    vertices[5].Set(-0.031914f, -0.084151f);
    vertices[6].Set(-0.010848f, -0.089344f);
    vertices[7].Set(0.010848f, -0.089344f);
    vertices[8].Set(0.031914f, -0.084151f);
    vertices[9].Set(0.051126f, -0.074069f);
    vertices[10].Set(0.067366f, -0.059681f);
    vertices[11].Set(0.079691f, -0.041825f);
    vertices[12].Set(0.087385f, -0.021538f);
    vertices[13].Set(0.087385f, 0.021538f);
    vertices[14].Set(0.079691f, 0.041825f);
    vertices[15].Set(0.067366f, 0.059681f);
    vertices[16].Set(-0.067366f, 0.059681f);
    vertices[17].Set(-0.079691f, 0.041825f);
    vertices[18].Set(-0.087385f, 0.021538f);
    int32 count = 19;

    b2PolygonShape polygon;
    polygon.Set(vertices, count);
    

    // Define the dynamic body fixture.
    b2FixtureDef fixtureDef;
    b2FixtureDef fixtureDefTri;
    
    fixtureDef.shape = &dynamicBox;
    fixtureDefTri.shape = &polygon;
    
    // Set the box density to be non-zero, so it will be dynamic.
    fixtureDef.density = 1.0f;
    fixtureDefTri.density = 1.0f;
    
    // Override the default friction.
    fixtureDef.friction = 0.3f;
    fixtureDefTri.friction = 0.3f;

    // Add the shape to the body.
    for(unsigned int i = 0; i < 6; i += 1){
        body[i]->CreateFixture(&fixtureDefTri);
    }
	
	// Prepare for simulation. Typically we use a time step of 1/60 of a
	// second (60Hz) and 10 iterations. This provides a high quality simulation
	// in most game scenarios.
	float32 timeStep = 1.0f / 60.0f;
	int32 velocityIterations = 6;
	int32 positionIterations = 2;

	// This is our little game loop.
	for (int32 i = 0; i < 60; ++i)
	{
		// Instruct the world to perform a single step of simulation.
		// It is generally best to keep the time step and iterations fixed.
		world.Step(timeStep, velocityIterations, positionIterations);

        b2Vec2 position[6];
        float32 angle[6];
        
		// Now print the position and angle of the body.
		for(unsigned int i = 0; i < 6; i += 1){
		    position[i] = body[i]->GetPosition();
		    angle[i] = body[i]->GetAngle();
		}
		
		printf("----------------------------------\n");
		for(unsigned int i = 0; i < 5; i += 1){
		    printf("%4.2f %4.2f\n", (position[i].x + 2.7) * 100, 540 - ((position[i].y + 3.7) * 100));
		    A.setPos(i, (position[i].x + 2.7) * 100, 540 - ((position[i].y + 3.7) * 100));
		}
		printf("----------------------------------\n");
	}
#endif

	// When the world destructor is called, all bodies and joints are freed. This can
	// create orphaned pointers, so be careful about your world management.
	
	return 0;
}
