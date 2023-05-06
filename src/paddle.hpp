#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);
	void update();

private:
	sf::RectangleShape paddle;
	sf::Vector2f direction;
	float step = 5;
};

#endif