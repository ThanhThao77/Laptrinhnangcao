#include<iostream>
#include<string>
using namespace std;
int DaoSo(int n)
{
	int sodao=0,cuoi;
	while (n != 0)
	 {
	 	cuoi = n % 10;
	 	sodao = (sodao*10 )+ cuoi;
	 	n = n/10;
	 }
	 return sodao;
}
int Check(int n)
{
	double a = DaoSo(n);
	if ( n == a) return 1;
	 else return 0;
}
int main()
{
	int n;int d=0;
	do{
	   cout<<"Nhap so nguyen duong n = ";cin>>n;
	  }
	while (n <= 10); 
	if (Check(n) == 1) cout<<n<<" la so doi xung!";
	 else cout<<n<<" khong la so doi xung!";
	for (int i =0;i<n;i++)
	{
		if (Check(i) == 1) d++;
	 }
	 cout<<"\nCo "<<d<<" so doi xung trong khoang tu 1 den "<<n; 
	return 0; 
}



