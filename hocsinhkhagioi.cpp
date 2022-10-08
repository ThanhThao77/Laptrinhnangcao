#include<iostream>
using namespace std;
struct sinhvien{
	string masv;
	string hoten;
	float diem;
};
void nhap1sv(sinhvien *x, int &n)
{
	cout<<"Nhap so sinh vien n = "; cin>>n;
	for( int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Nhao Ma SV: ";
		getline(cin,(x+i)->masv);
		cout<<"Nhap Ten SV: ";
		getline(cin,(x+i)->hoten);
		cout<<"Nhap Diem: ";
		cin>>(x+i)->diem;
	}
}
void xuat1sv(sinhvien *x, int &n)
{
	cout<<"Danh sach SV da nhap: ";
	for( int i=0;i<n;i++)
	{
		cout<<endl<<(x+i)->masv<<"\t"<<(x+i)->hoten<<"\t"<<(x+i)->diem;
	}
}
int inkha(sinhvien *x, int &n)
{
	cout<<"\nCac sinh vien co hoc luc Kha:";
	for(int i=0;i<n;i++)
	{
		if((x+i)->diem>=2.5 && (x+i)->diem<3.2 )
		{
			cout<<endl<<(x+i)->masv<<"\t"<<(x+i)->hoten<<"\t"<<(x+i)->diem;
		}
	}
}
int ingioi(sinhvien *x, int &n)
{
	cout<<"\nCac Sinh vien co hoc luc GIoi/Xuat Sac: ";
	for(int i=0;i<n;i++)
	{
		if((x+i)->diem>=3.2)
		{
			cout<<endl<<(x+i)->masv<<"\t"<<(x+i)->hoten<<"\t"<<(x+i)->diem;
		}
	}
}
int main()
{
	int n;
	sinhvien *x = new sinhvien [100];
	nhap1sv(x,n);
	xuat1sv(x,n);
	inkha(x,n);
	ingioi(x,n);
	delete[] x;
	return 0;
	
}
