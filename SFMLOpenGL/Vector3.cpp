#include "Vector3.h"
#include <iostream>

double Vector::getX()
{
	return x;
}

void Vector::setX(double value)
{
	x = value;
}

double Vector::getY()
{
	return y;
}

void Vector::setY(double value)
{
	y = value;
}

double Vector::getZ()
{
	return z;
}

void Vector::setZ(double value)
{
	z = value;
}

Vector::Vector()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector::Vector(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

Vector::Vector(Vector * V)
{
	x = V->x;
	y = V->y;
	z = V->z;

}

double Vector::length()
{
	return (double)sqrt(x * x + y * y + z * z);
}

double Vector::lengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void Vector::normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (length() > 0.0)
	{  // Check for divide by zero
		double magnit = length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

Vector Vector::operator+(Vector V1)
{
	// An overloaded operator + to return the sum of 2 vectors
	return Vector(x + V1.x, y + V1.y, z + V1.z);
}

Vector Vector::operator-(Vector V1)
{
	// An overloaded operator - to return the difference of 2 vectors
	return Vector(x - V1.x, y - V1.y, z - V1.z);
}

Vector Vector::operator-()
{
	// An overloaded operator - to return the negation of a single vector
	return Vector(x*-1, y*-1, z*-1);
}

double Vector::operator*(Vector V1)
{
	// An overloaded operator * to return the scalar product of 2 vectors
	return (x * V1.x, y * V1.y, z * V1.z);
}

Vector Vector::operator*(double k)
{
	// An overloaded operator * to return the product of a scalar by a vector
	return Vector(x * (float)k, y * (float)k, z * (float)k);
}

Vector Vector::operator*(float k)
{
	// An overloaded operator * to return the product of a scalar by a vector
	return Vector(x * k, y * k, z * k);
}

Vector Vector::operator*(int k)
{
	// An overloaded operator * to return the product of a scalar by a vector
	return Vector(x * k, y * k, z * k);
}

Vector Vector::operator^(Vector V1)
{
	// An overloaded operator ^ to return the vector product of 2 vectors
	return Vector(V1.y * z - V1.z * y, V1.z * x - V1.x * z, V1.x * y - V1.y * x);
}

std::string Vector::toString()
{
	char tmpbuf[256];
	sprintf_s(tmpbuf, "[%g, %g, %g]", x, y, z);
	return tmpbuf;
}