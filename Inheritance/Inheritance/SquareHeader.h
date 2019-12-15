#pragma once
#include "ParentHeader.h"

class Square : public Parent {
private:
	float a;
public:
	Square();
	~Square();

	//Установить a
	void SquareSet(float a);

	//Получить a
	float SquareGet();

	//Площадь
	float Area();

	//Периметр
	float Perimeter();
};