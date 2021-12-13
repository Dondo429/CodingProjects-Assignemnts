#include <iostream>
#include <vector>

using namespace std;

vector<string> names(int timesRun) {
	vector<string> n;
	//ask user for name each time, then push the names to n
	for (int i = 0; i < timesRun; i++) {
		string name = "";
		cout << "What is name " << i + 1 << " ?" <<endl;
		cin >> name;
		//extra space
		cout << endl;
		n.push_back(name);
	}
	//return vector n
	return n;
}

void displayNames(vector<string> n) {
	for (int i = 0; i < n.size(); i++) {
		cout << n[i] << ", ";
	}
	cout << endl;
}

void swap(vector<string> n) {
	string p = n[0];
	int last = n.size() - 1;
	n[0] = n[last];
	n[last] = p;

}

void displayShort(vector<string> n) {
	int shLength = n[0].size();
	string sh = n[0];
	for (int i = 1; i < n.size(); i++) {
		if (n[i].size() < shLength) {
			sh = n[i];
		}
	}
	cout << sh << endl;
}

int main() {
	int n;
	vector<string> name;
	cout << "How many names are you using?" << endl;
	cin >> n;
	name = names(n);

	cout << "Your names are:" << endl;
	displayNames(name);

	swap(name);
	cout << endl << "Swapping the first and last names..." << endl;
	displayNames(name);
	cout << endl;

	cout << "The shortest name is " << endl;
	displayShort(name);

	
}