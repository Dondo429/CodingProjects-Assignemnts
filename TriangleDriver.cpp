/*Donovan Carrillo
 * section. Do not change the
 *  name of the file
*/


#include <iostream>
#include <vector>
#include "Carrillo_Triangle.h"

using namespace std;

//creates vector full of triangles based on every three sides in array n
vector<triangle> createTri(int n[]) {
	vector<triangle> tri;
	int j = sizeof(n) / sizeof(n[0]);
	///
	/// size function for j is causing the for loop to only run once
	/// 
	for (int i = 0; i < j; i = i + 3) {
		triangle temp{ n[i], n[i + 1], n[i + 2] };
		tri.push_back(temp);
	};
	return tri;
}

//runs test for triangle
void test(triangle tri) {
	if (tri.isRightAngledTriangle() == true) {
		cout << "Area = " << tri.calculateAndDisplayArea() << endl;
	}
}

int main()
{
	/*
	Take 3 consecutive numbers of the triangleSides below programmatically
	The data in that array is for 5 triangles
	eg. 10, 6, 8 make 1 triangle,  4, 5, 6 make another triangle
	Test for each triangle in the Triangle.cpp that you will write
	If the triangle is a right angles triangle, print out its area
	*/
	
    int triangleSides[]   =  {10, 6, 8, 4, 5, 6, 3, 4, 5, 8, 6, 9, 15, 25, 20};
	vector<triangle> tri = createTri(triangleSides);

	for (int i = 0; i < tri.size(); i++) {
		test(tri[i]);
	}
     
    return 0;
}
