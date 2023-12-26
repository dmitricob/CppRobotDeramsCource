#pragma once
#include "Player.h"
#include <vector>

namespace Lesson16
{
	class Team
	{
	private:
		const char* _name;
		int playerCount;
		std::vector<Player*> _players;
	public:
		Team(const char*);
		void AddPlayer(Player*);
		void RemovePlayer(Player*);
		void TeamInfo();
	};
}

