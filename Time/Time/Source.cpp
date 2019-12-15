#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

Time Time::operator+ (Time Time_2) {

	Time TimeResult;

	//���������� �������
	TimeResult.second = second + Time_2.second;

		//�������� �� ���������� ������
		if (TimeResult.second >= 60) {
			TimeResult.second -= 60;
			TimeResult.minute = 1;
		}

	//���������� ������(+= ��� ��� � ����� ������� ��� ����� ���� 1)
	TimeResult.minute += minute + Time_2.minute;

	//��������, ���� �� �� �������� ��������� � ����
	if (TimeResult.minute >= 60) {
		TimeResult.minute -= 60;
		TimeResult.hour = 1;
	}

	//���������� ����(+= ��� ��� � ����� ������� ��� ����� ���� 1)
	TimeResult.hour += hour + Time_2.hour;

	return TimeResult;
}

Time Time::operator- (Time Time_2) {

	Time TimeResult;

	int result = abs((hour * 3600 + minute * 60 + second) - (Time_2.hour * 3600 + Time_2.minute * 60 + Time_2.second));

	TimeResult.hour = result / 3600;
	TimeResult.minute = (result - TimeResult.hour * 3600) / 60;
	TimeResult.second = result - TimeResult.hour * 3600 - TimeResult.minute * 60;

	return TimeResult;
}

void Time::AddingSeconds(int s){
	s += hour * 3600 + minute * 60 + second;

	//���� ������ ������� 24 ����
	if (s > 24 * 3600) {
		int rez = (int)floor(s / (24 * 3600));
		s -= rez * 24 * 3600;
	}

	hour = s / 3600;
	minute = (s - hour * 3600) / 60;
	second = s - hour * 3600 - minute * 60;

	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::AddingMinutes(int s) {
	s = s * 60 + hour * 3600 + minute * 60 + second;

	//���� ������ ������� 24 ����
	if (s > 24 * 3600) {
		int rez = (int)floor(s / (24 * 3600));
		s -= rez * 24 * 3600;
	}

	hour = s / 3600;
	minute = (s - hour * 3600) / 60;
	second = s - hour * 3600 - minute * 60;

	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::AddingHours(int s) {
	s = s * 3600 + hour * 3600 + minute * 60 + second;

	//���� ������ ������� 24 ����
	if (s > 24 * 3600) {
		int rez = (int)floor(s / (24 * 3600));
		s -= rez * 24 * 3600;
	}

	hour = s / 3600;
	minute = (s - hour * 3600) / 60;
	second = s - hour * 3600 - minute * 60;

	cout << hour << ":" << minute << ":" << second << endl;
}

int Time::TimeInSecond() {
	cout << "����� � ��������: ";
	return hour * 3600 + minute * 60 + second;
}

int Time::TimeInMinutes() {
	cout << "����� � �������: ";
	return (hour * 3600 + minute * 60 + second) / 60;
}

int Time::TimeInHour() {
	cout << "����� � �����: ";
	return ((hour * 3600 + minute * 60 + second) / 60) / 60;
}

void Time::ConvertTimeToString() {
	string stroka = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
	cout << "��� ������: "<< stroka << endl;
}

void Time::DisplayTheTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}