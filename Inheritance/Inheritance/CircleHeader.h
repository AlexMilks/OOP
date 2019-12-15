#pragma once
#include "ParentHeader.h"

constexpr auto M_PI = 3.14159265358979323;

class Circle : public Parent {
private:
	float r;
public:
	Circle();
	~Circle();

	//Площадь
	float Area();

	//Периметр
	float Perimeter();

	//Диаметр
	float Diameter();

	//Получаем радиус
	void CircleSetRadius(float r);

	//Высчитываем радиус
	float CircleGetRadius();
};