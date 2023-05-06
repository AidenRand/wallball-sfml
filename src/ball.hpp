#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);
	void moveBall();

private:
	sf::RectangleShape ball;
	sf::Vector2f velocity;
	float step = 5;
	float random_angle = rand() % (225 - 360 + 1);
};

#endif