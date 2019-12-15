#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	
	Time Time_1(6, 1, 13);
	Time Time_2(4, 30, 50);
	Time Time_3;
	Time Time_4;

	//Вывод времени
	cout << "Время: ";
	Time_1.DisplayTheTime();
	cout << "Время: ";
	Time_2.DisplayTheTime();

	cout << endl;

	//Сложение времени
	cout << "Сложение времени: ";
	Time_3 = Time_1 + Time_2;
	Time_3.DisplayTheTime();

	//Вычитание времени
	cout << "Вычитание времени: ";
	Time_4 = Time_1 - Time_2;
	Time_4.DisplayTheTime();

	cout << endl;

	//Добавление секунд
	int sec = 172800;
	cout << "С добавлением " << sec << " секунд: ";
	Time_1.AddingSeconds(sec);

	//Добавление минут
	int min = 60;
	cout << "С добавлением " << min << " минут: ";
	Time_1.AddingMinutes(min);

	//Добавление часов
	int hour = 48;
	cout << "С добавлением " << hour << " часов: ";
	Time_1.AddingHours(hour);

	cout << endl;

	//Перевод времени
	cout << Time_1.TimeInSecond() << endl;
	cout << Time_1.TimeInMinutes() << endl;
	cout << Time_1.TimeInHour() << endl;

	cout << endl;

	//Конвертирование в строку
	Time_1.ConvertTimeToString();

	system("pause");
	return 0;
}