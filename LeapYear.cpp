#include <iostream>
#include <vector>

using namespace std;
//Donovan Carrillo


vector<int> leapYear(int minYear, int maxYear){
	vector<int> arr;
	int *mi = &minYear;
	int *ma = &maxYear;
	//years is the amount of years between starting and ending year for array
	int years = *ma - *mi;
	int i = 0;
	while (i < years) {
		//run if year is 1752 or after
		if (*mi >= 1752) {
			
		}
		cout << i << endl;
		*mi++;
		i++;
	}

	return arr;
}