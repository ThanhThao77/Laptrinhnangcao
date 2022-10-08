#include <iostream>
#include <cmath>
using namespace std;
float giaithua (int n)
{
	int a = 1;
	if (n > 1) {
		return n*giaithua(n-1);
	}
	else { 
	    return 1;
	}
}
float tong (int n , float x){
	float  sinx = 0;
	x = x*M_PI/180; 
	for (int i = 0;i <= n;i++)
	{
		sinx = sinx + (pow(-1,i) * (pow(x,2*i)) / giaithua(2*i));
	} return sinx;
}
int main(){
    int n;
	float x;
	cout << "Nhap X = ";cin >> x;
	cout << "Nhap N = ";cin >> n;
	float  tong1 = tong (n,x);
	cout << "Cos(x) = " << tong1; 
return 0;
}
