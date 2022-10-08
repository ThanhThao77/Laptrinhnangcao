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

// viêt chuong trinh nhâp sô nguyên duong n. Ğêm xem n có bn chu so

