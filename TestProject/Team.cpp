#include "Team.h"
#include <algorithm>
#include <iostream>

Lesson16::Team::Team(const char* name)
{
	_name = name;
	_players = std::vector<Player*>();
}

void Lesson16::Team::AddPlayer(Player* player)
{
	playerCount++;
	_players.push_back(player);
}

void Lesson16::Team::RemovePlayer(Player* player)
{
	auto target = std::find(_players.begin(), _players.end(), player);
	if (target != _players.end()) 
	{
		playerCount--;
		_players.erase(target);
	}
}

void Lesson16::Team::TeamInfo()
{
	std::cout << "Team: " << _name << std::endl;
	for (int i = 0; i < _players.size(); i++)
	{
		_players[i]->PrintPlayerInfo();
	}
}
