#include <iostream>
#include <cmath>
using namespace std;
void nhap (int &n, int a[])
{
	cout << "So phan tu n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " <<i+1<< ": ";
		cin >> a[i];
	}
}
void xuat (int n, int a[])
{
	cout << "\nIn day so:";
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	} cout << endl;
}
void xuatnguoc (int n, int a[])
{
	cout << "In nguoc day so:";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << " " << a[i];
	}
}
int sochan (int n, int a[])
{
	int d = 0;
	for  (int i = 0; i <n; i++)
	{
		if (a[i] % 2 == 0)
		d++;
	} return d;
}
bool ktra (int n)
{
	int sqr = sqrt(n);
	return (sqr * sqr == n);
}
int SCP (int n, int a[])
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktra (a[i]))
		s++;
	}return s;
}
int main()
{
	int n, a[100];
	nhap (n,a);
	xuat (n,a);
	cout << endl;
	xuatnguoc (n,a);
	cout << "\nDay co " << sochan (n,a) << " so chan!";
	cout << "\nDay co " << SCP (n,a) << " so chinh phuong!";
return 0;
}

