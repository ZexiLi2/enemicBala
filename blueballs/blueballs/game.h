#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "jugador.h"
#include "enemy.h"
using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	void run();
private:
	void processEvents();
	void update();
	void render();
	//void handlePlayerInput(Keyboard::Key key, bool isPressed);
private:
	RenderWindow mWindow;
	Jugador mPlayer;
	Enemy mEnemy;
};