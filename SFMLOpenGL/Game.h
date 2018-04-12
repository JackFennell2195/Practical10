#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Vector3.h>
#include <Matrix3.h>

#include <fstream>

using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	std::string loadShaderFromFile(const std::string & textFile);
	Clock clock;
	Time elapsed;
	ifstream inFile;
	float rotationAngle = 0.0f;
};

#endif