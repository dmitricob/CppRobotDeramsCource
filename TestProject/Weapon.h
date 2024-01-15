#pragma once
#include <string>

namespace Lesson16
{
	class Weapon
	{
	private:
		const char* _name;
		int _damage;
		int _range;
	public:
		Weapon(const char* name, int damage, int range);
		std::string Info();
	};
}
