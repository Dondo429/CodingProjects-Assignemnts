#include <iostream>

using namespace std;

//I couldn't get my size function working in other function's for loops
//or sizeof[arr] / sizeof[*arr]
//so I assumed 7 in the for loops
int size(int *arr[]) {
	int n = sizeof(arr) / sizeof(*arr);
	return n;
}

int average(int arr[]) {
	int total = 0;
	for (int i = 0; i <= 6; i++) {
		total = total + arr[i];
	}

	int average = total / 6;
	return average;
}

int minimum(int arr[]) {
	int m = arr[0];
	for (int i = 1; i <= 6; i++) {
		if (arr[i] < m) {
			m = arr[i];
		}
	}
	return m;
}

int maximum(int arr[]) {
	int ma = arr[0];
	for (int i = 0; i <= 6; i++) {
		if (arr[i] > ma) {
			ma = arr[i];
		}
	}
	return ma;
}

int main() {
	int inputs[] = { 100, 82, 176, 441, 5, 205, 166 };
	cout << "Size of array 'inputs': " << size(inputs) << endl;
	cout << "Average of inputs in array 'inputs': " << average(inputs) << endl;
	cout << "Minimum integer: " << minimum(inputs) << endl;
	cout << "Maximum integer: " << maximum(inputs) << endl;
	
}