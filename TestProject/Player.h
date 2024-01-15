#pragma once
#include "Weapon.h"

namespace Lesson16
{
	enum class PlayerClass
	{
		assault = 0,
		support = 1,
		sniper = 2,
		medic = 3
	};
	class Player
	{
	private:
		const char* _name;
		int _hp;
		PlayerClass _playerClass;
		Weapon* _weapon;
	public:

		std::string GetplayerClass();
		Player(const char* name, int hp, PlayerClass playerClass, Weapon* weapon);
		void SetWeapon(Weapon*);
		Weapon* GetWeapon() const;
		void PrintPlayerInfo();
	};
}

