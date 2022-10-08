#include <iostream>
#include <cmath>
using namespace std;
void nhapmang (int &n, int a[])
{
	cout << "Nhap so phan tu cua day n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i <<"] = ";
		cin >> a[i];
	}
}
void xuatmang (int n, int a[])
{
	cout << "Day so vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void inra (int n, int a[])
{
	int x;
	cout << "\nX = "; cin >> x;
	cout << "Cac phan tu nho hon " << x << " la: ";
	for (int i = 0; i < n; i++) {
		if (a[i] < x)
		cout << a[i] << " ";
	}
}
void lietkesochan (int n, int a[])
{
	cout << "\nPhan tu co gia tri chan trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
}
int MAX (int n, int a[])
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
		max = a[i]; 
 return max;
}
int MINduong (int n, int a[])
{
	int i, min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] > 0) {
			min = a[i];
			break;
		}
	}
	for (int i = 1; i < n; i++) {
		if (min > a[i])
		min = a[i];
	} return min;
}
int Demsoam (int a[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
	    d++;
	} return d;
}
bool SCP (int n)
{
	int sqr = sqrt(n);
	return (sqr*sqr == n);
}
void KiemtraSCP (int a[], int n)
{
	cout << "\nSo chinh phuong co trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (SCP (a[i])) {
			cout << a[i] << " ";
		}
	}
}
int Tinhtong (int n, int a[])
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		d += a[i];
	}return d;
}
int main()
{
	int n, a[100];
	nhapmang (n, a);
	xuatmang (n, a);
	inra (n, a);
	lietkesochan (n, a);
	cout << "\nSo lon nhat trong mang la: " << MAX(n,a);
	cout << "\nSo nguyen duong nho nhat la: " << MINduong(n,a);
	cout << "\nTong cac phan tu cua mang la: " << Tinhtong(n,a);
	cout << "\nCac so am co trong mang la: " << Demsoam (a,n) << " so";
	KiemtraSCP (a,n);
return 0;
}


