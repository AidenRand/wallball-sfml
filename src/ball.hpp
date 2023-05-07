#ifndef BALL_HPP
#define BALL_HPP

#include "paddle.hpp"
#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(int width, int height, float x, float y);
	void drawTo(sf::RenderWindow& window);
	void moveBall(float dt);
	void collision(Paddle& paddle_rect, int& score);
	void reset(int& lives_left);

private:
	sf::RectangleShape ball;
	sf::Vector2f velocity;
	bool is_dead = false;
	float step_x = 500;
	float step_y = 500;
	float random_angle = rand() % (225 - 360 + 1);
};

#endif