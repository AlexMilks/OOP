#pragma once

class Parent {
public:
	Parent();
	~Parent();

	//�����-����������� �������
	//�������
	float virtual Area() = 0;

	//��������
	float virtual Perimeter() = 0;
};