#include "RectangleHeader.h"
#include <cmath>

Rectangle::Rectangle() {
}

Rectangle::~Rectangle() {
}

float Rectangle::Area() {
	return a * b;
}

float Rectangle::Perimeter() {
	return 2 * (a + b);
}

float Rectangle::GetA() {
	return a;
}

float Rectangle::GetB() {
	return b;
}

float Rectangle::Diagonal() {
	return sqrt(a * b);
}

void Rectangle::SetA(float a) {
	if (a > 0) {
		this->a = a;
	}
}

void Rectangle::SetB(float b) {
	if (b > 0) {
		this->b = b;
	}
}

void Rectangle::SetSides(float a, float b) {
	SetA(a);
	SetB(b);
}