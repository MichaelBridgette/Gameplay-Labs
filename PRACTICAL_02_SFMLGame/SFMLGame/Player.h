#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"
#include<SFML\Graphics\Texture.hpp>

using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();
	void initialize();
	void update();
	void draw(sf::RenderWindow* window);
	sf::FloatRect spriteRect();
	
private:
	int m_posX;
	int m_posY;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	
};
#endif