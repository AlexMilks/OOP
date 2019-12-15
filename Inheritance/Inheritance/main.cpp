#include "SquareHeader.h"
#include "CircleHeader.h"
#include "RectangleHeader.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	//�������
	Square SquareObj;
	SquareObj.SquareSet(7);

	cout << "������� ��������: ";
	cout << SquareObj.SquareGet() << endl;

	cout << "������� ��������: ";
	cout << SquareObj.Area() << endl;

	cout << "�������� ��������: ";
	cout << SquareObj.Perimeter() << endl;

	cout << endl;

	//����
	Circle CirclObj;
	CirclObj.CircleSetRadius(4);

	cout << "������ �����: ";
	cout << CirclObj.CircleGetRadius() << endl;

	cout << "������� �����: ";
	cout << CirclObj.Diameter() << endl;

	cout << "������� �����: ";
	cout << CirclObj.Area() << endl;

	cout << "�������� �����: ";
	cout << CirclObj.Perimeter() << endl;

	cout << endl;

	//�������������
	Rectangle RectangleObj;
	RectangleObj.SetSides(6, 2);

	cout << "������� �������������� �����: ";
	cout << RectangleObj.GetA() << " � " << RectangleObj.GetB() << endl;

	cout << "��������� �������������� �����: ";
	cout << RectangleObj.Diagonal() << endl;

	cout << "������� �������������� �����: ";
	cout << RectangleObj.Area() << endl;

	cout << "�������� �������������� �����: ";
	cout << RectangleObj.Perimeter() << endl;

	cout << endl;

	system("pause");
	return 0;
}
