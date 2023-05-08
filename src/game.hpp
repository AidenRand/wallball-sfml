#ifndef GAME_HPP
#define GAME_HPP

class Game
{
public:
	Game(int& lives_left_num, float lives_x, float lives_y, int& score_num, float score_x, float score_y);
	void drawTo(sf::RenderWindow& window);
	void endGame(bool& game_ended, int& lives_left, sf::RenderWindow& window);

private:
	sf::Text lives_left;
	sf::Text score;
	sf::Text end_text;
	sf::Font font;
};

#endif