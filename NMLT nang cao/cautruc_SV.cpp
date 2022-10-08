
#include <iostream>
#include <string>
using namespace std;
//khai bao cau truc
struct Date {
	int ngay;
	int thang;
	int nam;
};
struct Sinhvien
{
	string hoten;
	string msv;
	Date ngaysinh;
	string quequan;
	float diemtb;
};

void nhap (int &n, Sinhvien *sv)
{
	cout << "Nhap so sinh vien la: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Ho ten sinh vien: "; getline (cin,sv[i].hoten);
		cout << "Ma sinh vien: "; getline (cin, sv[i].msv);
		cout << "Ngay sinh: "; cin >> (*(sv + i)).ngaysinh.ngay;
		fflush (stdin);
		cout << "Thang sinh: "; cin >> (*(sv + i)).ngaysinh.thang;
		fflush (stdin);
		cout << "Nam sinh: "; cin >> (*(sv + i)).ngaysinh.nam;
		fflush (stdin);
		cout << "Que quan: "; getline (cin, sv[i].quequan);
		cout << "Diem TB = "; cin >> (*(sv + i)).diemtb;
		fflush (stdin);
	}
}

void xuatdulieu (int n, Sinhvien *sv)
{
	cout << "Ma SV \t\t Ho ten \t\t Sinh ngay \t\t\t Que quan \t\t Diem TB" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (*(sv + i)).msv << "\t" << (*(sv + i)).hoten << "\t\t" << (*(sv + i)).ngaysinh.ngay << " / " << (*(sv + i)).ngaysinh.thang << " /" << (*(sv + i)).ngaysinh.nam << "\t\t" << (*(sv + i)).quequan << "\t\t" << (*(sv + i)).diemtb << endl; 
		
	}
	cout << "*****************************************************************" << endl;
}
// sap xep diem tang dan
void Sapxep (int n, Sinhvien *sv)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if( sv[i].diemtb> sv[j].diemtb)
			{
				 Sinhvien temp = sv[i];
					sv[i] = sv[j];
						sv[j] =temp;
			}
		}
	}
	cout << "\nDanh sach sinh vien sau khi sap xep diem TB theo thu tu tang dan la:\n";
	xuatdulieu (n,sv);
}
// in ra SV co ÐIB cao nhat
void DiemtbMax (int n, Sinhvien *sv)
{
	float max = sv[0].diemtb;
	string hoten = sv[0].hoten;
	string msv = sv[0].msv;
	string quequan = sv[0].quequan;
	for (int i = 0; i < n; i++)
	{
		if (max < (*(sv + i)).diemtb)
		{
			max = (*(sv + i)).diemtb;
			hoten = (*(sv + i)).hoten;
			msv = (*(sv + i)).msv;
			quequan = (*(sv + i)).quequan;
		}
	}
	cout << "\nSinh vien co diem TB cao nhat la:\n" << hoten << " - Ma SV: " << msv << " - Que quan: " << quequan << " - Diem TB = " << max << endl;
		cout << "*****************************************************************" << endl;
}

//tinh tong tat ca ÐTB cua SV da nhap
int Tinhtong (int n, Sinhvien *sv)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		d += (*(sv + i)).diemtb;
	} return d;
}
int main()
{
	int n;
	int x;
	Sinhvien *sv = new Sinhvien[100];
	nhap (n,sv);
	cout << "\nDanh sach sinh vien vua nhap la:\n";
	xuatdulieu (n,sv);
	DiemtbMax (n,sv);
	Sapxep (n,sv);
	cout << "\nTong diem cua tat ca SV la: " << Tinhtong (n,sv);
return 0;
}

