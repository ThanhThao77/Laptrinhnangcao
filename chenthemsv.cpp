#include<iostream>
using namespace std;
struct sinhvien{
	string masv;
	string hoten;
	float diem;
	
};
void nhap(sinhvien *sv , int &n)
{
	cout<<"Nhap so sinh vien n = ";cin>>n;
	for( int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhap Ma SV: ";
		getline(cin,(sv+i)->masv);
		cout<<"Nhap Ten SV: ";
		getline(cin,(sv+i)->hoten);
		cout<<"Nhap Diem: ";
		cin>>(sv+i)->diem;
	}
}
void xuat(sinhvien *sv, int n)
{
	cout<<"Danh sach SV da nhap: ";
	for(int i=0;i<n;i++)
	{
		cout<<endl<<(sv+i)->masv<<"\t"<<(sv+i)->hoten<<"\t"<<(sv+i)->diem;
	}
}
void hskha(sinhvien *sv, int n)
	
{
	cout<<"Cac Sinh vien co Hoc luc Kha: ";
	for( int i=0;i<n;i++)
	{
		if((sv+i)->diem>=2.5 && (sv+i)->diem<3.2)
		{
			cout<<endl<<(sv+i)->masv<<"\t"<<(sv+i)->hoten<<"\t"<<(sv+i)->diem;
		}
		
	}
}
void hsgioi( sinhvien *sv , int n)
{
cout<<"Cac Sinh vien  co Hoc luc Gioi/Xuat sac: ";
	for(int i=0;i<n;i++)
	{
		if((sv+i)->diem>=3.2)
		{
			cout<<endl<<(sv+i)->masv<<"\t"<<(sv+i)->hoten<<"\t"<<(sv+i)->diem;
		}
	}
		
	}
	void chen(int a[], int &n, int vitricanchen, int socanchen)
	{
		for(int =n;i>=vitricanchen;i--)
		{
			a[i]=a[i-1];
			
		}
		a[vitricanchen]=socanchen;
		n++;
	}

int main()
{
	int n;
	sinhvien *sv= new sinhvien [100];
	nhap(sv,n);
	xuat(sv,n);
	hskha(sv,n);
	hskha(sv,n);
	delete [] sv;
	return 0;
}
