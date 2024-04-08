#include "jugador.h"


Jugador::Jugador()
{
	mPlayer.setRadius(40.f);
	mPlayer.setPosition(100.f, 100.f);
	mPlayer.setFillColor(Color::Cyan);
}

void Jugador::update()
{
	sf::Vector2f movement(0.f, 0.f);
	if (mIsMovingUp)
		movement.y -= 1/6.f;
	if (mIsMovingDown)
		movement.y += 1/6.f;
	/*if (mIsMovingLeft)
		movement.x -= 1.f;
	if (mIsMovingRight)
		movement.x += 1.f;*/
	mPlayer.move(movement);
}
CircleShape Jugador::Draw() {
	return mPlayer;
}


void Jugador::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{
	if (key == Keyboard::W)
		mIsMovingUp = isPressed;

	else if (key == Keyboard::S)
		mIsMovingDown = isPressed;
	//només va de dalt a baix
	/*else if (key == Keyboard::A)
		mIsMovingLeft = isPressed;
	else if (key == Keyboard::D)
		mIsMovingRight = isPressed;*/
	
	
	//no furula
	/*
	
	if (mPlayer.getPosition.y < -100)
	{
		mPlayer.setPosition(100.f, 640.f);

	}
	else if (mPlayer.getPosition.y < 700)
	{
		mPlayer.setPosition(100.f, 0.f);

	}*/


}