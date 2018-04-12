#pragma once

#include <math.h>
#include "string"
#include <SFML/Graphics.hpp>

class Vector
{
public:
	double getX();
	void setX(double value);

	double getY();
	void setY(double value);

	double getZ();
	void setZ(double value);

	Vector();
	Vector(double x1, double y1, double z1);
	Vector(Vector * V);
	double length();
	double lengthSquared();
	void normalise();

	Vector operator +(Vector V1);
	Vector operator -(Vector V1);
	Vector operator -();
	double operator *(Vector V1);
	Vector operator *(double k);
	Vector operator *(float k);
	Vector operator *(int k);
	Vector operator ^(Vector V1);
	std::string Vector::toString();



private:
	double x;
	double y;
	double z;
};