#include <iostream>
#include <string>
using namespace std;

struct Sinhvien {
	string msv;
	string hoten;
	float diem;
};

void nhap (int &n, Sinhvien *sv)
{
	cout << "Nhap so sinh vien n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap Ma SV: "; getline (cin,sv[i].msv);
		cout << "Nhap Ten SV: "; getline (cin,sv[i].hoten);
		cout << "Nhap Diem: "; cin >> (*(sv+i)).diem;
	}
}

void xuat (int n, Sinhvien *sv)
{
	cout << "Danh sach SV:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (*(sv+i)).msv << "\t" << (*(sv+i)).hoten << "\t" << (*(sv+i)).diem << endl;
	}
}

void DiemMax (int n, Sinhvien *sv)
{
	float max = sv[0].diem;
	string ma = sv[0].msv;
	string ten = sv[0].hoten;
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diem >= 3)
		{
		max = sv[i].diem;
		ma = sv[i].msv;
		ten = sv[i].hoten;
	}
	}
	cout << "Cac Sinh vien co diem cao nhat:" << endl;
	cout << ma << "\t" << ten << "\t" << max << endl;
}
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien [100];
	nhap (n,sv);
	xuat (n,sv);
	DiemMax (n,sv);
return 0;
}

