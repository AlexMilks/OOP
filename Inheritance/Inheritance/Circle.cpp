#include "CircleHeader.h"

Circle::Circle() {
}

Circle::~Circle() {
}

float Circle::Area() {
	return r * r * (float)M_PI;
}

float Circle::Perimeter() {
	return 2 * (float)M_PI * r;
}

void Circle::CircleSetRadius(float r) {
	if (r > 0){
		this->r = r;
	}
}

float Circle::CircleGetRadius() {
	return this->r;
}

float Circle::Diameter() {
	return r * 2;
}