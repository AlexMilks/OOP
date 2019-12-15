#pragma once
#include "ParentHeader.h"

class Rectangle : public Parent {
	float a;
	float b;
public:
	Rectangle();
	~Rectangle();

	void SetSides(float a, float b);

	void SetA(float a);

	void SetB(float b);

	//�������
	float Area();

	//��������
	float Perimeter();

	float GetA();

	float GetB();

	//���������
	float Diagonal();
};