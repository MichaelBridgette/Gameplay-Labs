#include "Game.h"

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game(){}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning){

		

		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
		glMatrixMode(GL_MODELVIEW);

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;
}

void Game::update()
{
	
}

void Game::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	{ 
		/*glVertex3f(100, 100, -30.0);
		glVertex3f(-150, -100, -30.0);
		glVertex3f(150, -100, -30.0); */
	
	}
	glEnd();
	
	glBegin(GL_POINTS);
	{
		glVertex3d(1.0f, 1.0f,1.0f);
	}
	glEnd();

	glBegin(GL_LINES);
	{
		glVertex3d(-0.5, -1.0, -30.0);
		glVertex3d(0.5, -1.0, -30.0);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	{
		glVertex3d(-0.5, -2.0, -30.0);
		glVertex3d(0.5, -2.0, -30.0);
		glVertex3d(0.2, -3.0, -30.0);
	}
	glEnd();



	glBegin(GL_LINE_LOOP);
	{
		glVertex3d(-0.5, -5.0, -30.0);
		glVertex3d(1.0, -8.0, -30.0);
		glVertex3d(1.0, -5.0, -30.0);
		glVertex3d(0.5, -8.0,-30.0);

	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	{
		glVertex3d(0, -10, -30);
		glVertex3d(-1, -11, -30);
		glVertex3d(1, -10, -30);
		
		glVertex3d(2, -10, -30);
		glVertex3d(3, -11, -30);
		glVertex3d(-3, -10, -30);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	{


	}
	glEnd();

	glBegin(GL_QUADS);
	{

	}
	glEnd();

	glBegin(GL_QUAD_STRIP);
	{

	}
	glEnd();

	glBegin(GL_POLYGON);
	{

	}
	glEnd();
	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

