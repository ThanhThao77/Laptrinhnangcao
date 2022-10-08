#include <iostream>
using namespace std;
void nhap (int &n)
{
	do {
		cout << "Nhap so gio lam:";
		cin >> n;
	} while (n <= 10 || n >= 65);
}

int Tinh (int n)
{
	int luong = 0;
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (10 <= n <= 40)
		{
			luong = n*15000;
		} return luong;
		
		if (60 <= n <= 65)
		{
			d = n*22500;
		}
		return d;
	}
}
int main()
{
	int n;
	nhap (n);
	cout << "Luong ban nhan duoc:" << Tinh(n);
return 0;
}

