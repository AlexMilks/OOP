#pragma once
#include "ParentHeader.h"

class Square : public Parent {
private:
	float a;
public:
	Square();
	~Square();

	//���������� a
	void SquareSet(float a);

	//�������� a
	float SquareGet();

	//�������
	float Area();

	//��������
	float Perimeter();
};