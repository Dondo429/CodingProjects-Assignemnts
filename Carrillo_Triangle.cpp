#include <iostream>
#include "Carrillo_Triangle.h"



triangle::~triangle() {};

bool triangle::isRightAngledTriangle() {
	int hyp;
	int a, b;
	if (side1 > side2 && side1 > side3) {
		hyp = side1;
		a = side2;
		b = side3;
	}
	else if (side2 > side1 && side2 > side3) {
		hyp = side2;
		a = side1;
		b = side3;
	}
	else {
		hyp = side3;
		a = side1;
		b = side2;
	}

	//pythagreom
	if ((a * a) + (b * b) == (hyp * hyp)) {
		return true;
	}
	else { return false; }
}

int triangle::calculateAndDisplayArea() {
	int hyp;
	int a, b;
	if (side1 > side2 && side1 > side3) {
		hyp = side1;
		a = side2;
		b = side3;
	}
	else if (side2 > side1 && side2 > side3) {
		hyp = side2;
		a = side1;
		b = side3;
	}
	else {
		hyp = side3;
		a = side1;
		b = side2;
	}

	//calculate area
	int area = (a + b) / 2;
	return area;
}