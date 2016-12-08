#include "Player.h"
#include "NPC.h"

class Game
{
	public:
		Game();
		void run();
	private:
		void initialize();
		void update();
		void draw();
		bool checkCollisions();
		Player* player;
		NPC* npc;
};