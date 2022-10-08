#include <iostream>
#include <cmath>
using namespace std;
void nhap (int &n, int a[])
{
	cout << "So phan tu n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void xuat (int n, int a[])
{
	cout << "\nIn day so: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
/*void xuatnguoc (int n, int a[])
{
	cout << "\nIn nguoc day so: ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
}*/
int Max (int n, int a[])
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		max = a[i];
	}
	return max;
}
int sochan (int n, int a[])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		dem++;
	} return dem;
}
bool SCP (int n)
{
	int sqr = sqrt(n);
	return (sqr * sqr == n);
}
int Ktra (int n, int a[])
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (SCP (a[i]))
		d++;
	} return d;
}

int main()
{
	int n, a[100];
	nhap (n,a);
	xuat (n,a);
	//xuatnguoc (n,a);
	cout << "\nSo max = " << Max (n,a);
	cout << "\nDay co " << sochan (n,a) << " so chan!" ;
	cout << "\nDay co " << Ktra (n,a) << " so chinh phuong!";
return 0;
}

