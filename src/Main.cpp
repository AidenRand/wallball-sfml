#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Wallball");
	window.setFramerateLimit(30);
	sf::Clock clock;
	float dt;

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
		dt = clock.restart().asSeconds();
		std::cout << dt << "\n";
		window.clear();
		window.display();
	}
	return 0;
}