#include <iostream>
#include <math.h>
using namespace std;
float giaithua (int n)
{
	int a = 1;
	if (n > 1) {
		return n*giaithua(n-1);
	}
	else
	{
		return 1;
	}
}
int main() {
    int n;
	float x;
	cout << "Nhap X = ";cin >> x;
	cout << "Nhap N = ";cin >> n;
	float sinx = 0;
	x = x*M_PI/180; 
	for (int i = 0;i < n;i++)
	{
		sinx = sinx +pow(x,2*i)/giaithua(2*i);
	}
	cout << "ch(x) = " << sinx << endl;
	return 0;
}

