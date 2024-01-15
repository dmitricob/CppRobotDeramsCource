#include "Rectangle.h"
#include <iostream>

float Rectangle::GetArea()
{
	return _length * _height;
}

float Rectangle::GetPerimeter()
{
	return _length + _length + _height + _height;
}

Rectangle::Rectangle(float length, float height)
{
	_length = length;
	_height = height;
}

Rectangle::Rectangle()
{
	std::srand(std::time(nullptr));
	_length = std::rand() % (100 + 1);
	_height = std::rand() % (100 + 1);
}
