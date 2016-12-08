#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
	if (!m_texture.loadFromFile("davy j.png"))
	{
		std::string s("Error Loading Texture");
		throw std::exception(s.c_str());
	}
	m_sprite.setTexture(m_texture);
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* window)
{
	//cout << "NPC drawing" << endl;

	window->draw(m_sprite);
	m_sprite.getGlobalBounds();



}

sf::FloatRect NPC::spriteRect()
{
	return m_sprite.getGlobalBounds();

}