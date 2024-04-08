#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <ctime>
using namespace std;
using namespace sf;

class Enemy
{

public:
	Enemy(/*float windowWidth, float windowHeight*/);
	void update();
	RectangleShape Draw();
	void handleEnemyMovement();
	

private:
	RectangleShape mEnemy;
	Clock clock;
	Time dt = clock.restart();
	bool mIsMovingLeft = false;
	bool enemyActive = false;
	float enemySpeed = 0.0f;

	float posX;
	float posY;
	float speed;
	float windowHeight;
	float window = (640, 480);
		float deltaTime;
};

