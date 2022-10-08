#include<iostream>
#include<cmath>
using namespace std;
void nhap(int a[],int &n)
{
	for( int i=0;i<n;i++){
		cout<<"So thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void xuat(int a[], int n)
{
	for( int i=1;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

	int max(int a[], int &n)
	{
		int max=a[0];
		for( int i=1;i<n;i++)
		{
			if(max<a[i])
			
				max=a[i];
			
			
		}	
		return max;
	}
	int min(int a[], int &n)
	{
		int min=a[0];
		for( int i=1;i<n;i++)
		{
			if(min>a[i])
			
				min=a[i];
			
			
		}	
		return min;
	}

	int chiacho5(int a[],int n)
	{
		int dem=0;
		for( int i=1;i<n;i++)
		{
			if(a[i]%5==0)
			dem++;
		}
		return dem;
	}

int sont(int *a, int n) {
	int count2=0;
	for (int i=0; i<n; i++) {
		if ((*(a+i)) < 2) continue;
		int count=0;
		for (int j=2; j<=sqrt(*(a+i)); j++) {
			if ((*(a+i)) % j == 0) count++;
		}
		if (count==0) count2++;
	}
	return count2;
}
	float TBC( int a[], int n)
	{
		int s=0;
	float tong=0;
		for( int i=0;i<n;i++)
		{
			tong=tong+a[i];
			s++;
		}
		return tong/s;
		
	}
	
int main()
{

	int a[100];
	int n;
	cout<<"Nhap so phan tu cua day, n = ";cin>>n;
	nhap(a,n);
	cout<<"In day so:"<<endl;
	xuat(a,n);
	cout<<"\nMax = "<<max(a,n)<<endl;
	cout<<"Min = "<<min(a,n)<<endl;
	cout<<"Day co "<<chiacho5(a,n)<<" so chia het cho 5.";
	cout<<"\nDay co "<<sont(a,n)<<" so nguyen to.";
	cout<<"\nTrung binh cong cac so TBC = "<<TBC(a,n);
	return 0;

	
	
	

}
