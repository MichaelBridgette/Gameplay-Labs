#include <Player.h>

Player::Player(){

	m_posX = 600;
	m_posY = 450;

};
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;
	if (!m_texture.loadFromFile("hobo box 1.png"))
	{
		std::string s("Error Loading Texture");
		throw std::exception(s.c_str());
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_posX, m_posY);
}
void Player::update()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_sprite.setPosition(m_posX, m_posY-=5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_sprite.setPosition(m_posX, m_posY+=5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_sprite.setPosition(m_posX-=5, m_posY);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_sprite.setPosition(m_posX+=5, m_posY);
	}
	
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* window)
{
	//cout << "Player drawing" << endl;

	window->draw(m_sprite);
	
}

sf::FloatRect Player::spriteRect()
{
	return m_sprite.getGlobalBounds();
}