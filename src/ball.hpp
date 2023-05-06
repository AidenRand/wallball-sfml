#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape ball;
};

#endif