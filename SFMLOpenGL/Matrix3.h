#pragma once
#include "Vector3.h"
#include <math.h>


class Matrix3
{
public:
	Matrix3();
	Matrix3(Vector Row1, Vector Row2, Vector Row3);
	Matrix3(double _A11, double _A12, double _A13,
		double _A21, double _A22, double _A23,
		double _A31, double _A32, double _A33);
	const float PI = 3.14f;
	Vector operator*(Vector V1);
	Matrix3 Transpose(Matrix3 M1);
	Matrix3 operator +(Matrix3 M1);
	Matrix3 operator -(Matrix3 M1);
	Matrix3 operator *(double x);
	Matrix3 operator *(Matrix3 M1);
	double Determinant(Matrix3 M1);
	Vector Row(int i);
	Vector Column(int i);
	Matrix3 Inverse(Matrix3 M1);
	Matrix3 Rotation(int _angle);
	Matrix3 Translate(int dx, int dy);
	Matrix3 Scale(int dx, int dy);
	Matrix3 Negative(Matrix3 M1);
	Matrix3 RotationX(int _angle);
	Matrix3 RotationY(int _angle);
	Matrix3 RotationZ(int _angle);
	Matrix3 Scale3D(int dx);

private:
	double A11;
	double A12;
	double A13;
	double A21;
	double A22;
	double A23;
	double A31;
	double A32;
	double A33;

};