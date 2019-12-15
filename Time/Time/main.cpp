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

	//����� �������
	cout << "�����: ";
	Time_1.DisplayTheTime();
	cout << "�����: ";
	Time_2.DisplayTheTime();

	cout << endl;

	//�������� �������
	cout << "�������� �������: ";
	Time_3 = Time_1 + Time_2;
	Time_3.DisplayTheTime();

	//��������� �������
	cout << "��������� �������: ";
	Time_4 = Time_1 - Time_2;
	Time_4.DisplayTheTime();

	cout << endl;

	//���������� ������
	int sec = 172800;
	cout << "� ����������� " << sec << " ������: ";
	Time_1.AddingSeconds(sec);

	//���������� �����
	int min = 60;
	cout << "� ����������� " << min << " �����: ";
	Time_1.AddingMinutes(min);

	//���������� �����
	int hour = 48;
	cout << "� ����������� " << hour << " �����: ";
	Time_1.AddingHours(hour);

	cout << endl;

	//������� �������
	cout << Time_1.TimeInSecond() << endl;
	cout << Time_1.TimeInMinutes() << endl;
	cout << Time_1.TimeInHour() << endl;

	cout << endl;

	//��������������� � ������
	Time_1.ConvertTimeToString();

	system("pause");
	return 0;
}