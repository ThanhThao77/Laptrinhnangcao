#include <iostream>
#include <cmath>
using namespace std;
void nhap (int &n, int a[])
{
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while ( n <=0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cout << "So thu " << i+1 << ": ";
		cin >> a[i];
	}
}
void xuat (int n, int a[])
{
	cout << "\nIn day so:";
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
}
float TBC (int n, int a[])
{
	float tong = 0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
		s++;
	}
	return tong/s;
}
bool ktra (int n)
{
	if ( n <= 1)
	return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		return false;
	} return true;
}
int SNT (int n, int a[])
{
	int d = 0;
	for (int i = 0; i< n; i++)
	{
		if (ktra(a[i]))
		d++;
	} return d;
}
int main()
{
	int n, a[100];
	nhap (n,a);
	xuat (n,a);
	cout << endl;
	cout << "\nTBC day so: " << TBC (n,a);
	cout << "\nDay co " << SNT (n,a) << " so nguyen to.";
return 0;
}

