#include<iostream>
using namespace std;

int main(){
	int k;
	int matrix [4][4]{
		{1 , 2, 3, 4}, // row 0
		{5 , 6, 7, 8}, // row 1
		{9 ,10,11,12}, // row 2
		{13,14,15,16}, // row 3	
		};
	
	cout << "the main diagonal is: ";
	for (k = 3; k >= 0; k--){
		cout << matrix [k][k] << " ";
	}
}
