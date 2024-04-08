#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace std;
using namespace sf;

class Jugador
{

public:
	Jugador();
	void update();
	CircleShape Draw();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
	

private:
	CircleShape mPlayer;
	bool mIsMovingUp = false;
	bool mIsMovingDown = false;
	bool mIsMovingLeft = false;
	bool mIsMovingRight = false;


};

