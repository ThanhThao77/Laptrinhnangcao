#include <iostream>
#include <string>
using namespace std;

struct Sinhvien {
	string msv;
	string hoten;
	float diemtb;
};

void nhapdulieu (int &n, Sinhvien *sv)
{
	cout << "Nhap so sinh vien: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Ma SV: "; getline (cin, sv[i].msv);
		cout << "Ho ten SV la: "; getline (cin, sv[i].hoten);
		cout << "Diem TB = "; cin >> (*(sv+i)).diemtb;
		fflush (stdin);	
	}
}
void xuatdulieu (int n, Sinhvien *sv)
{
	cout << "Ma SV \t\t Ho ten \t\t Diem TB" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (*(sv+i)).msv << "\t\t" << (*(sv+i)).hoten << "\t\t" << (*(sv+i)).diemtb << endl;
	}	
}
void Diem_Max_Min (int n, Sinhvien *sv)
{
	float max = sv[0].diemtb;
	float min = sv[0].diemtb;
	string msv = sv[0].msv;
	string hoten = sv[0].hoten;
	for (int i = 0; i < n; i++)
	{
		if (max < (*(sv+i)).diemtb)
		{
		max = (*(sv+i)).diemtb;
		msv = (*(sv+i)).msv;
		hoten = (*(sv+i)).hoten;
		}
    } 	
cout << "\nSinh vien co diem TB cao nhat la: " << hoten << " - " << max << " diem" << endl;
 
    for (int i = 0; i < n; i++)
    {
		if (min > (*(sv+i)).diemtb)
		{
			min = (*(sv+i)).diemtb;
			msv = (*(sv+i)).msv;
			hoten = (*(sv+i)).hoten;
		}
	}
cout << "\nSinh vien co diem TB thap nhat la: " << hoten << " - " << min << " diem" << endl;
}

void Sapxep (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (sv[i].diemtb > sv[j].diemtb)
			{
				Sinhvien temp = sv[i];                  // Sinhvien temp = sv[i];
				sv[i]= sv[j];              // sv[i] = sv[j];
				sv[j] = temp;                      // sv[j] = temp;
			}
		}
	} cout << "\nDanh sach SV sap xep theo thu tu tang dan la: " << endl;
	     xuatdulieu (n,sv);
	     
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (sv[i].diemtb < sv[j].diemtb)
			{
			Sinhvien temp = sv[i];                
				sv[i]= sv[j];             
				sv[j] = temp;  	// int temp = sv[i].diemtb;
				                // sv[i].diemtb = sv[j].diemtb;
			                       	// sv[j].diemtb = temp;
			}
		}
	} cout << "\nDanh sach SV sap xep theo thu tu giam dan la: " << endl;
	     xuatdulieu (n,sv);
}
void TimSV (int n, Sinhvien *sv)
{
	string a;
	cout << "\nNhap ten SV can tim: "; getline (cin,a);
	for (int i = 0; i < n; i++)
	{
		if ((*(sv+i)).hoten == a)
		{
			cout << "Sinh vien co diem la: " << (*(sv+i)).diemtb << " diem" << endl;
		}
	}
}
int Tinhtong (int n, Sinhvien *sv)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += (*(sv+i)).diemtb;
	} return tong;
}
void Hienthi (int n, Sinhvien *sv)
{
	cout << "\nSinh vien co diem >= 5 la: " << endl;
	cout << "Ma SV \t\t Ho ten" << endl;
	for (int i = 0; i < n; i++)
	if ((*(sv+i)).diemtb >= 5)
	{
		cout << (*(sv+i)).msv << "\t\t" << (*(sv+i)).hoten << endl;
	}
	
	cout << "\nSinh vien co diem < 5 la: " << endl;
	cout << "Ma SV \t\t Ho ten \t\t Diem TB" << endl;
	for (int i = 0; i < n; i++)
	if ((*(sv+i)).diemtb < 5)
	{
		cout << (*(sv+i)).msv << "\t\t" << (*(sv+i)).hoten << "\t\t" << (*(sv+i)).diemtb << endl;
	}
}
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien[100];
	nhapdulieu (n,sv);
	cout << "Danh sach sinh vien vua nhap la:" << endl;
	xuatdulieu (n,sv);
	Diem_Max_Min (n,sv);
	Sapxep (n,sv);
	TimSV (n,sv);
	cout << "\nTong diem cua SV da nhap la: " << Tinhtong (n,sv) << endl;
	Hienthi (n,sv);
return 0;
}

