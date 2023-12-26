#include "Player.h"
#include <iostream>


namespace Lesson16
{
	std::string Player::GetplayerClass()
	{
		switch (_playerClass)
		{
		case Lesson16::PlayerClass::assault:
			return "Assault";
		case Lesson16::PlayerClass::support:
			return "Support";
		case Lesson16::PlayerClass::sniper:
			return "Sniper";
		case Lesson16::PlayerClass::medic:
			return "Medic";
		default:
			break;
		}
	}
	Player::Player(const char* name, int hp, PlayerClass playerClass, Weapon* weapon)
	{
		_name = name;
		_hp = hp;
		_playerClass = playerClass;
		_weapon = weapon;
	}

	void Player::SetWeapon(Weapon* weapon)
	{
		_weapon = weapon;
	}

	Weapon* Player::GetWeapon() const
	{
		return _weapon;
	}

	void Player::PrintPlayerInfo()
	{
		std::cout <<
			"Name: " << _name << std::endl <<
			"Hp: " << _hp << std::endl <<
			"Class: " << GetplayerClass() << std::endl <<
			"Weapon: " << _weapon->Info() << std::endl << 
			"Team: " << "####" << std::endl; // as for me its bad idea if player would have acces to Team list or this method should be not in player entity 
	}
}