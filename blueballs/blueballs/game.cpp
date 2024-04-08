#include "game.h"

Game::Game() :
	mWindow(sf::VideoMode(640, 480), "SFML Game Engine"), mPlayer(), mEnemy()

{
}
void Game::run()
{
	while (mWindow.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::update()
{
	mPlayer.update();
	mEnemy.update();
}
void Game::render()
{
	mWindow.clear();
	mWindow.draw(mPlayer.Draw());
	mWindow.draw(mEnemy.Draw());
	mWindow.display();
}

void Game::processEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			mPlayer.handlePlayerInput(event.key.code, true);

			break;
		case sf::Event::KeyReleased:
			mPlayer.handlePlayerInput(event.key.code, false);
			break;
		
		case sf::Event::Closed:
			mWindow.close();
			break;
		}

	
	}
	mEnemy.handleEnemyMovement();
}

