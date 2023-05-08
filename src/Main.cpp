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

	std::srand(time(NULL));

	Paddle paddle(50, 10, 350.0, 850.0);
	Ball ball(10, 7, 350.0, 450.0);

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