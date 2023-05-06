#include "paddle.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Wallball");
	window.setFramerateLimit(30);
	sf::Clock clock;
	float dt;

	Paddle paddle(50, 10, 350.0, 850.0);

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
		window.clear();
		dt = clock.restart().asSeconds();
		paddle.drawTo(window);
		paddle.update(dt);
		window.display();
	}
	return 0;
}