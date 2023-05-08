#include "ball.hpp"
#include "game.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Wallball");
	window.setFramerateLimit(60);
	sf::Clock clock;
	float dt;

	int lives_left = 5;
	int score = 0;
	bool game_ended = false;

	std::srand(time(NULL));
	float x = 350.0;

	float paddle_y = 850.0;
	Paddle paddle(50, 10, x, paddle_y);

	float ball_y = 450.0;
	Ball ball(10, 7, x, ball_y);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(sf::Color(5, 5, 5));
		dt = clock.restart().asSeconds();

		Game game(lives_left, 650, 30, score, 50, 30);
		game.drawTo(window);
		game.endGame(game_ended, lives_left, window);
		if (game_ended)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			{
				x = 350.0;
				paddle_y = 850.0;
				ball_y = 450.0;
				score = 0;
				lives_left = 5;
			}
		}

		paddle.drawTo(window);
		paddle.update(dt);
		ball.drawTo(window);
		ball.moveBall(dt);
		ball.collision(paddle, score);
		ball.reset(lives_left);
		std::cout << lives_left << "\n";
		window.display();
	}
	return 0;
}