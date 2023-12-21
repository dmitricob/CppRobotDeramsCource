#pragma once
#include <time.h>
#include <iostream>

namespace MyRandom
{
	void InitRandom(unsigned int seed = std::time(nullptr));
	int GetRandom(int max);
}
