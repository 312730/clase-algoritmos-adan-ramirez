#include <iostream>
using namespace std;
int main(){
	int XA, YA, SA , XB, YB, SB;
	cout << "please enter coordinate in X axis to square A... ";
	cin >> XA;
	cout << "\nplease enter coordinate in Y axis to square A... ";
	cin >> YA;
	cout << "\nplease enter the length of the side for square A... ";
	cin >> SA;
	cout << "\nplease enter coordinate in X axis to square B... ";
	cin >> XB;
	cout << "\nplease enter coordinate in Y axis to square B... ";
	cin >> YB;
	cout << "\nplease enter the length of the side for square B... ";
	cin >> SB;
	
	
	
	if (XA <= XB && XB <= (XA+SA) &&  YA >= YB  && YB >= (YA-SA)){
		cout << "\nupper left corner of square B is within square A";
	}
	if (XA <= (XB+SB) && (XB+SB)<= (XA+SA) &&  YA >= YB  && YB >= (YA-SA)){
		cout << "\nupper right corner of square B is within square A";
	}
	if (XA <= XB && XB <= (XA+SA) &&  YA >= (YB-SB)  && (YB-SB) >= (YA-SA)){
		cout << "\nbottom right corner of square B is within square A";
	}
	if (XA <= (XB+SB) && (XB+SB) <= (XA+SA) &&  YA >= (YB-SB)  && (YB-SB) >= (YA-SA)){
		cout << "\nbottom left corner of square B is within square A";
	}
	
	if (XB <= XA && XA <= (XB+SB) &&  YB >= YA  && YA >= (YB-SB)){
		cout << "\nupper left corner of square A is within square B";
	}
	if (XB <= (XA+SA) && (XA+SA)<= (XB+SB) &&  YB >= YA  && YA >= (YB-SB)){
		cout << "\nupper right corner of square A is within square B";
	}
	if (XB <= XA && XA <= (XB+SB) &&  YB >= (YA-SA)  && (YA-SA) >= (YB-SB)){
		cout << "\nbottom left corner of square A is within square B";
	}
	if (XB <= (XA+SA) && (XA+SA) <= (XB+SB) &&  YA >= YA  && YA >= (YB-SB)){
		cout << "\nbottom right corner of square A is within square B";
	}
}
