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
		cout << "Nhap Ma SV: "; getline (cin, sv[i].msv);
		cout << "Nhap Ten SV: "; getline (cin, sv[i].hoten);
		cout << "Nhap Diem: "; cin >> (*(sv+i)).diem;
	}
}

void xuat (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		cout << (*(sv+i)).msv << "\t\t" << (*(sv+i)).hoten << "\t\t" << (*(sv+i)).diem << endl;
	}
}

void Hienthi_tangdan (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].diem > sv[j].diem)
			{
				Sinhvien temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	cout << "Danh sach Sinh vien: " << endl;
	xuat (n,sv);
}
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien [100];
	nhap (n,sv);
	//cout << "Danh sach SV vua nhap la: " << endl;
	//xuat (n,sv);
	Hienthi_tangdan (n,sv);
return 0;
}

