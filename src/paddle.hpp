#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape paddle;
};

#endif