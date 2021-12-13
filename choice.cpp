///DONOVAN CARRILLO
#include <iostream>
#include <random>
#include <vector>

using namespace std;

void throwDice(int n, int sides) {
	int m = 0;
	for (int i = 0; i <= n; i++) {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, sides);
		if (dis(gen) == sides) {
			m++;
		}
	}
	////////////////////////////////////////////////////////////////////////////////////
	//for some reason it should print the same number on line 22 and 23, but it doesn't?
	////////////////////////////////////////////////////////////////////////////////////
	cout << "Number of Throws: " << n << endl;
	cout << "Number of Dice Sides: " << sides << endl;
	cout << "Max value " << sides << " appeared " << m << "times\n";
}

vector<int> chooseDiceThrow() {
	vector<int> j;
	int n, m;
	//prompt user for how many throws and sides of dice
	//throws
	cout << "How many times must the dice be thrown?\n";
	cin >> n;
	j.push_back(n);
	cout << "Select the dice you want to play with\n\n";

	cout << "1. Cube\n2. Octahedron\n3. Dodecahedron\n";
	//take user input
	cin >> m;

	//exception handling
	if (m < 1 || m >3) {
		throw ("Sorry, no dice!!");
	}




	//Tell user how many times the dice is being thrown
	//use n with switch to use given dice function
	switch (m) {
	case 1:
		j.push_back(6);
		return j;
	case 2:
		j.push_back(8);
		return j;
	case 3:
		j.push_back(12);
		return j;
	}


	int main(int argc, char* argv[]) {
		vector<int> j;
		chooseDiceThrow();
		throwDice(j[0], j[1]);
		return 0;
	}
