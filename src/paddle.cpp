#include "paddle.hpp"

Paddle::Paddle(int width, int height, float x, float y)
{
	paddle.setSize(sf::Vector2f(width, height));
	paddle.setFillColor(sf::Color(200, 200, 200));
	paddle.setPosition(sf::Vector2f(x, y));
	paddle.setOrigin(width / 2, height / 2);
}

void Paddle::drawTo(sf::RenderWindow& window)
{
	window.draw(paddle);
}

void Paddle::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		direction.x -= step;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		direction.x += step;
	}
	paddle.move(direction);
}
