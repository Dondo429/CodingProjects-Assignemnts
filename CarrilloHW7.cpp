/*
Class CS445
In class assignment - Email/IP Checker
Create a program that prompts the user to enter an IP or email.
The program will then check if the IP or email is valid.

By : Nicholas Simons, Donovan Carrillo

The email address must start with a letter (no numbers or symbols).
There must be an @ somewhere in the string that is located before the dot.
There must be text after the @ symbol but before the dot.
There must be a dot and text after the dot.

Chagnes needed:
Solve A@B.C.D
Add exceptions
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string input;

bool isChar(char c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool isDigit(const char c) {
	return ((c >= '0' && c <= '9'));
}

bool is_valid(string email)
{
	if (!isChar(email[0])) {
		return 0;
	}
    int At = -1, Dot = -1;
    for (int i = 0;
        i < email.length(); i++) {

        // If the character is '@' 
        if (email[i] == '@') {
            At = i;
        }

        // If character is '.' 
        else if (email[i] == '.') {
            Dot = i;
        }
    }
    // If At or Dot is not present 
    if (At == -1 || At == 0 || Dot == -1)
        return 0;

    // If Dot is present before At 
    if (At > Dot)
        return 0;

    //If there is no characters between At and Dot
    if (Dot - At == 1)
        return 0;

    // If Dot is present at the end 
    return !(Dot >= (email.length() - 1));
}

bool isIP(string s) {
	string num;
	vector<int> a;
	int dot = 0;
	bool ip = false;

	for (int i = 0; i < s.length(); i++) {
		if (isChar(s[i])) {
			return false;
		}
	}

	for (int i = 0; i < s.length(); i++) {
		if (isDigit(s[i])) {
			num = num + s[i];
		}
		if (s[i] == '.') {
			dot++;
			int p = stoi(num);
			a.push_back(p);
			num.clear();

		}
	}

	int p = stoi(num);
	a.push_back(p);
	num.clear();


	if (dot != 3) {
		return false;
	}

	if (a.size() != 4) {
		return false;
	}

	if (a[0] > 200 || a[0] < 1) {
		return false;
	}

	for (int i = 0; i < 4; i++) {
		if (a[i] > 200) {
			return false;
		}
	}

	return true;

}

bool isIE(string input) {

	bool isEmail = isChar(input[0]);

	if (isEmail) {
		bool ans = is_valid(input);
		if (ans) {
			cout << input << " : " << " is a VALID email." << endl;
		}
		else {
			cout << input << " : is an INVALID email\n";
			return false;
		}
	}
	else {
		bool ans = isIP(input);
		if (ans) {
			cout << input << " : " << " is a VALID IP." << endl;
		}
		else {
			cout << input << " : is an INVALID IP.\n";
			return false;
		}
	}
	return true;
}

int main() {
	while (1) {
		cout << "Enter a valid IP or Email Adress: ";
		cin >> input;
		if (input == "quit") {
			return 0;
		}
		isIE(input);
		
	}
    return 0;
}