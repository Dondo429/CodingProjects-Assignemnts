#include <iostream>
#include <random>

using namespace std;

int dice(int num1, int num2) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(num1, num2);
	return dis(gen);
}

double convert(int n) {
	
	double m = (double)n / 100;
	return m;
}

void printB(double b) {
	double bb = floorf(b * 100) / 100;
	int p = b;
	int i = 0;
	bool tens = true;
	while (tens == true) {
		if (p > 0) {
			p = p / 10;

			i++;
		}
		else {
			tens = false;
			break;
		}
	}
	for (int j = 1; j <= 11-i; j++) {
		cout << "-";
	}

	if (b > 0) {
		cout << " + ";
	}
	else {
		cout << " = ";
	}
	cout << bb << endl;
}
	


int main() {

	int aa = dice(100, 100000);
	int bb = dice(100, 100000);
	int cc = dice(100, 100000);

	double a = convert(aa);
	double b = convert(bb);
	double c = convert(cc);
	cout << a << " " << b << " " << c << endl;
	cout << endl << endl;

	//once it returns to default float it will work correctly
	//but its not >:(
	cout << hexfloat << a << endl << defaultfloat;
	printB(b);
	cout << scientific << c << defaultfloat;
	cout << endl << endl;


	return 0;
}