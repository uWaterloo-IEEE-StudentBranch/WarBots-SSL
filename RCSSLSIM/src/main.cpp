#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <Box2D/Box2D.h>

using namespace std;

// There are no graphics for this example. Box2D is meant to be used
// with your rendering engine in your game engine.
int main(int argc, char** argv)
{
	B2_NOT_USED(argc);
	B2_NOT_USED(argv);

	// Define the gravity vector.
	b2Vec2 gravity(0.0f, -10.0f);

	// Construct a world object, which will hold and simulate the rigid bodies.
	b2World world(gravity);

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
	    groundBody[i] = world.CreateBody(&groundBodyDef[i]);
	}
	
	// Define the ground box shape.
	b2PolygonShape groundBox[4];

	// The extents are the half-widths of the box.
	groundBox[0].SetAsBox(3.7f, 0.3f);
	groundBox[1].SetAsBox(3.7f, 0.3f);
	groundBox[2].SetAsBox(0.3f, 2.7f);
	groundBox[3].SetAsBox(0.3f, 2.7f);

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
	bodyDef[5].position.Set(3.0f, 4.0f);
	
	b2Body* body[6];
	for(unsigned int i = 0; i < 6; i += 1){
	    body[i] = world.CreateBody(&bodyDef[i]);
	}

	// Define another box shape for our dynamic body.
	b2PolygonShape dynamicBox;
	dynamicBox.SetAsBox(0.09f, 0.09f);

	// Define the dynamic body fixture.
	b2FixtureDef fixtureDef;
	fixtureDef.shape = &dynamicBox;

	// Set the box density to be non-zero, so it will be dynamic.
	fixtureDef.density = 1.0f;

	// Override the default friction.
	fixtureDef.friction = 0.3f;

	// Add the shape to the body.
	for(unsigned int i = 0; i < 6; i += 1){
	    body[i]->CreateFixture(&fixtureDef);
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
		for(unsigned int i = 0; i < 6; i += 1){
		    printf("%4.2f %4.2f %4.2f\n", position[i].x, position[i].y, angle[i]);
		}
		printf("----------------------------------\n");
	}

	// When the world destructor is called, all bodies and joints are freed. This can
	// create orphaned pointers, so be careful about your world management.

	return 0;
}
