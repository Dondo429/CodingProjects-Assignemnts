#pragma once

class triangle {
private:
	int side1{ 1 };
	int side2{ 1 };
	int side3{ 1 };
public:
	triangle(int a, int b, int c)
		: side1(a), side2(b), side3(b) {};
	~triangle();

	bool isRightAngledTriangle();
	int calculateAndDisplayArea();

};