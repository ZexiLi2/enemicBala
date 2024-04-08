#include "enemy.h"

Enemy::Enemy(/*float windowWidth, float windowHeight*/)
{
	mEnemy.setSize(sf::Vector2f(100, 50));
	mEnemy.setPosition(200.f, 100.f);
	mEnemy.setFillColor(Color::Red);

}

void Enemy::update()
{
	sf::Vector2f movement(0.f, 0.f);
	//if (mIsMovingUp)
	//	movement.y -= 1.f;
	//if (mIsMovingDown)
	//	movement.y += 1.f;
	if (mIsMovingLeft)
		movement.x -= 1.f;

	mEnemy.move(movement);
}
RectangleShape Enemy::Draw() {
	return mEnemy;
}


void Enemy::handleEnemyMovement()
{
	srand(time(0));
	/*float posX = static_cast<float>(mWindow.getSize().x - mEnemy.getSize().x);
	float posY = static_cast<float>(rand() % (mWindow.getSize().y - static_cast<int>(mEnemy.getSize().y)));
	mEnemy.setPosition(posX, posY);*/
	if (!enemyActive)
	{
		srand((int)time(0));
		enemySpeed = 200;

		srand((int)time(0) * 10);
		float height = rand() %  400 + 10;
		mEnemy.setPosition(600, height);
		enemyActive = true;
	}
	else{
	//	// Move the enemy
	//	mEnemy.move(-speed * deltaTime, 0);

	//// If the rectangle collides with the left wall
	//if (mEnemy.getPosition().x + mEnemy.getSize().x < 0) {
	//	// Respawn at a random height on the right side
	//	posY = static_cast<float>(rand() % static_cast<int>(windowHeight - mEnemy.getSize().y));
	//	mEnemy.setPosition(posX, posY);
	}

	}

	/*if (mEnemy.getPosition().x < -100)
	{
		enemyActive = false;
	}*/

