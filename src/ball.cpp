#include "ball.hpp"

Ball::Ball(int width, int height, float x, float y)
{
	ball.setSize(sf::Vector2f(width, height));
	ball.setOrigin(width / 2, height / 2);
	ball.setPosition(sf::Vector2f(x, y));
	ball.setFillColor(sf::Color(200, 200, 200));
}

void Ball::drawTo(sf::RenderWindow& window)
{
	window.draw(ball);
}

void Ball::moveBall()
{
	velocity.x = step * cos(random_angle * M_PI / 180);
	velocity.y = step * sin(random_angle * M_PI / 180);
	ball.move(velocity);
}