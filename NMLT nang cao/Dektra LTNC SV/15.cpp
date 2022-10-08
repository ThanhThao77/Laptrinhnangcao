#include <iostream>
#include <cmath>
using namespace std;

void nhap (int &n, int a[])
{
	cout << "So phan tu n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i+1 << ": ";
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
int Max (int n, int a[])
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		 max = a[i];
	} return max;
}
float Sochan (int n, int a[])
{
	float s = 0, d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 3 == 0)
		{
			s = s + a[i];
			d++;
		}
	} return d;
/*	tb = s/d;
	if (d == 0)
	    return 0;
	    return tb; */
}
bool SCP (int n)
{
	int sqr = sqrt(n);
	return (sqr * sqr == n);
}
int ktra (int n, int a[])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SCP (a[i]))
		dem ++;
	} return dem;
}
int main()
{
	int n, a[100];
	nhap (n,a);
	xuat (n,a);
	cout << endl;
	cout << "\nSo max = " << Max (n,a);
	cout << "\nDay co " << Sochan (n,a) << " so chan chia het cho 3!";
	cout << "\nDay co " << ktra (n,a) << " so chinh phuong!";
return 0;
}

