#include <iostream>
using namespace std;

int logarit (int n)
{
	int dem = 0;
	while (n >= 10) {
		n = n/10;
		dem++;
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhap so nguyen N = ";
	cin >> n;
	cout << "So nguyen N co " << logarit(n) + 1 << " chu so.";
return 0;
}

// vi�t chuong trinh nh�p s� nguy�n duong n. ��m xem n c� bn chu so

