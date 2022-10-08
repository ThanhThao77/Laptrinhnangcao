#include <iostream>
#include <cmath>
using namespace std;

int SNT(int n)
{
	int d = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			d++;
		}
	} return d;
	
}
int main()
{
	int n;
	cout << "Nhap so N = "; 
	cin >> n;
	int i = SNT(n);
	if (i == 0)
	cout << n << " la so nguyen to.";
	else 
	cout << n << " khong phai la so nguyen to.";
	return 0;
}
