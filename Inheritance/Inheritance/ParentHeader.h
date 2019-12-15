#pragma once

class Parent {
public:
	Parent();
	~Parent();

	//Чисто-виртуальная функция
	//Площадь
	float virtual Area() = 0;

	//Периметр
	float virtual Perimeter() = 0;
};