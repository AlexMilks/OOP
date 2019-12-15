#pragma once
#include "ParentHeader.h"

constexpr auto M_PI = 3.14159265358979323;

class Circle : public Parent {
private:
	float r;
public:
	Circle();
	~Circle();

	//�������
	float Area();

	//��������
	float Perimeter();

	//�������
	float Diameter();

	//�������� ������
	void CircleSetRadius(float r);

	//����������� ������
	float CircleGetRadius();
};