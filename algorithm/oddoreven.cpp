#include <iostream>

using namespace std;

int main () {
	int aleph;
	bool done = false;
	cout << "please enter your number... ";
	if (aleph < 0){
		aleph * (-1);
	}
	cin >> aleph;
	// if number is even then if we subtract two eventually we got to zero, otherwise it's odd
	while (aleph > 0){
		aleph = aleph - 2;
		if (aleph == 0){
			cout << "your number is even";
		}
		if (aleph < 0){
			cout << "the number is odd";
		}	
	}
	// because zero is even we enter this saying it's even
	if (aleph == 0){
		cout << "your number is even";
	}
	return 0;
}
