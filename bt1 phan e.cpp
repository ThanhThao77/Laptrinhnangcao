
#include <iostream>
#include <math.h>
using namespace std;
float tong (int n,int a )
{
	int d;
	float t = 0;
	for (int i = 1;i <= n;i++) {
		d = pow(a,i);
		t += 1.0/d;
	}
	return t;
}
int main(){
    int a,n;
	cout << "Nhap N = ";cin >> n;
	cout << "Nhap A = ";cin >> a;
	float  tong1 = tong (n,a);
	cout << "S = " <<tong1; 
	
return 0;
}
