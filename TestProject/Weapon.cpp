#include "Weapon.h"
#include <string>

namespace Lesson16
{
	Weapon::Weapon(const char* name, int damage, int range)
	{
		_name = name;
		_damage = damage;
		_range = range;
	}

	std::string Weapon::Info()
	{
		return "Name " + static_cast<std::string>(_name) + "  Damage " + std::to_string(_damage) + "  Range " + std::to_string(_range);
	}
}