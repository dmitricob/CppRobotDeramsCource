#include "Lesson16.h"
#include "Rectangle.h"
#include <iostream>
#include "Team.h"

namespace Lesson16
{
	void Lesson() 
	{
		Rectangle rect1 = Rectangle();
		Rectangle rect2 = Rectangle(1.f,2.f);
		std::cout << "1 GetArea " << rect1.GetArea() << "GetPerimeter " << rect1.GetPerimeter() << std::endl;
		std::cout << "2 GetArea " << rect2.GetArea() << "GetPerimeter " << rect2.GetPerimeter() << std::endl;

		Team team = Team("Team 1");
		Weapon weapon1 = Weapon("Weapon 1", 1 ,1);
		Weapon weapon2 = Weapon("Weapon 2", 2 ,2);
		team.AddPlayer(new Player("name 1",1,PlayerClass::assault, &weapon1));
		team.AddPlayer(new Player("name 2",2,PlayerClass::medic, &weapon2));
		team.TeamInfo();
	}
}