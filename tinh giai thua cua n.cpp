#include <iostream>
using namespace std;

   int giaithua (int n)  // dinh nghia ham
{
	int giaithua = 1;
	for (int i = 1; i <= n; i++)
	 { 
	  giaithua = giaithua*i;
	 }
	    return giaithua;
}

   int main()
{
     int n;
     cout << "Nhap N = ";
	 cin >> n;
	 cout << "Giai thua cua " << n << " la:" << endl;
	 cout << n << "! = " << giaithua(n);
return 0;
}

// viêt hàm tính giai thua cua N

