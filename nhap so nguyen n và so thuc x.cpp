#include <iostream>
#include <cmath>
using namespace std;

int giaithua (int n)
{
	int giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua = giaithua*i;
	}
	return giaithua;
}
   int main()
{
  int n;
  double x, t = 0;
  cout << "Nhap so nguyen n = "; cin >> n;
  cout << "Nhap so thuc x = "; cin >> x;
  	for (int i = 1; i <= n; i++) 
  	{
  	 t = (pow(x,i)) / (giaithua(i));
}
cout << "Tong la: " << t;
return 0;
}

