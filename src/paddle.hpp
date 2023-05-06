#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);
	void update(float dt);

private:
	sf::RectangleShape paddle;
	float step = 500;
};

#endif