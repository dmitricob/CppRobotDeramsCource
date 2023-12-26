#pragma once
class Rectangle
{
private:
	float _length, _height;
public:
	float GetArea();
	float GetPerimeter();

	Rectangle(float length, float height);
	Rectangle();
};

