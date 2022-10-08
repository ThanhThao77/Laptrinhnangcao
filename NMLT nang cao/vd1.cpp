#include <iostream>
using namespace std;
enum Xeploai {
	xuatsac,
	gioi,
	kha,
	trungbinh,
	yeu,
	kem
};
int main()
{
	Xeploai x1;
	x1 = yeu;
	
	switch (x1) {
		case kem:
			cout << "Hoc sinh xep loai "<< x1 <<": kem"; break;
		case yeu:
			cout << "Hoc sinh xep loai "<< x1 <<": yeu"; break;
		case trungbinh:
			cout << "Hoc sinh xep loai "<< x1 <<": trungbinh"; break;
		case kha:
			cout << "Hoc sinh xep loai "<< x1 <<": kha"; break;
		case gioi:
			cout << "Hoc sinh xep loai "<< x1 <<": gioi"; break;
		default:
		    cout << "Hoc sinh xep loai "<< x1 <<": xuatsac"; break; 
		
	}
return 0;
}

