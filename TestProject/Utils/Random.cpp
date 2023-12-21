#include "Random.h"
#include <iostream>

namespace MyRandom 
{
	void InitRandom(unsigned int seed )
	{
		std::srand(seed);
	}

	int GetRandom(int max)
	{
		return std::rand() % (max + 1);
	}
}
