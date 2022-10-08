#include <iostream>
#include <cmath>
using namespace std;

void nhap (int &n, int a[])
{
	do{
		cout << "Nhap n = "; cin >> n;
} while (n <= 0 || n > 100);
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
	} cout << endl;
}

/*int Max (int n, int a[])
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		max = a[i];
	} return max;
}
int Min (int n, int a[])
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		min = a[i];
	} return min;
}

int chiacho5 (int n, int a[])
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 5 == 0)
		dem++;
	} return dem;
}*/

bool ktra (int n)
{
	if (n <= 1)
	return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		return false;
	} return true;
}
int SNT (int n, int a[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktra (a[i]))
		count++;
	} return count;
}

float TBC (int n, int a[])
{
	int s = 0;
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
		s++;
	} 
	return tong/s;
}
int main()
{
	int n, a[100];
	nhap (n,a);
	xuat (n,a);
	//cout << endl;
	//cout << "Max = " << Max(n,a) << ", Min = " << Min(n,a);
	//cout << "\nDay co " << chiacho5(n,a) << " so chia het cho 5.";
	//cout << "\nDay co " << SNT (n,a) << " so nguyent to.";
	cout << "\nTBC day so: " << TBC (n,a);
	cout << "\nDay co " << SNT (n,a) << " so nguyen to.";
return 0;
}

