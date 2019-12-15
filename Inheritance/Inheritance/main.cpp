#include "SquareHeader.h"
#include "CircleHeader.h"
#include "RectangleHeader.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	//Квадрат
	Square SquareObj;
	SquareObj.SquareSet(7);

	cout << "Сторона квадрата: ";
	cout << SquareObj.SquareGet() << endl;

	cout << "Площадь квадрата: ";
	cout << SquareObj.Area() << endl;

	cout << "Периметр квадрата: ";
	cout << SquareObj.Perimeter() << endl;

	cout << endl;

	//Круг
	Circle CirclObj;
	CirclObj.CircleSetRadius(4);

	cout << "Радиус круга: ";
	cout << CirclObj.CircleGetRadius() << endl;

	cout << "Диаметр круга: ";
	cout << CirclObj.Diameter() << endl;

	cout << "Площадь круга: ";
	cout << CirclObj.Area() << endl;

	cout << "Периметр круга: ";
	cout << CirclObj.Perimeter() << endl;

	cout << endl;

	//Прямоугольник
	Rectangle RectangleObj;
	RectangleObj.SetSides(6, 2);

	cout << "Стороны прямоугольника равны: ";
	cout << RectangleObj.GetA() << " и " << RectangleObj.GetB() << endl;

	cout << "Диагональ прямоугольника равна: ";
	cout << RectangleObj.Diagonal() << endl;

	cout << "Площадь прямоугольника равна: ";
	cout << RectangleObj.Area() << endl;

	cout << "Периметр прямоугольника равен: ";
	cout << RectangleObj.Perimeter() << endl;

	cout << endl;

	system("pause");
	return 0;
}
