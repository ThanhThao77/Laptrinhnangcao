#include <iostream>
using namespace std;
void nhapmang (int &n, int a[])
{
	do {	
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
} while (n <= 1|| n >=20);
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i <<"] = ";
		cin >> a[i];
	}
}
void xuatmang (int n, int a[])
{
	cout << "Mang vua vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void soam (int n, int a[])
{
	cout << "\nCac so am co trong mang la: ";
	for (int i = 0; i < n ;i++)
	{
		if (a[i] < 0)
		{
			cout << a[i] << " ";
		}
	}
	
	int s = 0;
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
		s++;
	} 
	cout << "\nTBC cua cac so am la: " << tong/s;
}

int main()
{
	int n, a[100];
	nhapmang(n,a);
	xuatmang (n,a);
	soam (n,a);
return 0;
}

