#include "game.hpp"

Game::Game(int& lives_left_num, float lives_x, float lives_y, int& score_num, float score_x, float score_y)
{
	// Set lives left
	std::string lives_string = std::to_string(lives_left_num);
	lives_left.setString(lives_string);
	lives_left.setPosition(sf::Vector2f(lives_x, lives_y));

	// Set score
	std::string score_string = std::to_string(score_num);
	score.setString(score_string);
	score.setPosition(sf::Vector2f(score_x, score_y));
}

void Game::drawTo(sf::RenderWindow& window)
{
	if (!font.loadFromFile("content/8_bit_party.ttf"))
	{
		std::cout << "ERROR: Cannot load font file" << std::endl;
		system("pause");
	}

	// Print lives left to window
	lives_left.setFont(font);
	lives_left.setCharacterSize(30);
	lives_left.setFillColor(sf::Color(200, 200, 200));
	window.draw(lives_left);

	score.setFont(font);
	score.setCharacterSize(30);
	score.setFillColor(sf::Color(200, 200, 200));
	window.draw(score);
}