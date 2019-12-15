#include "SquareHeader.h"

Square::Square() {
}

Square::~Square() {
}

float Square::Area() {
	return a * a;
}

float Square::Perimeter() {
	return 4 * a;
}

void Square::SquareSet(float a) {
	if (a > 0) {
		this->a = a;
	}
}

float Square::SquareGet() {
	return this->a;
}