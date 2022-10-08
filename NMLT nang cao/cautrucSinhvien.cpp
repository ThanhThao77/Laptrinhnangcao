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
		cout << "Nhap Ten SV: "; getline (cin,sv[i].hoten);
		cout << "Nhap Diem: "; cin >> (*(sv+i)).diem;
	}
}

void xuat (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	cout << (*(sv+i)).msv << "\t" << (*(sv+i)).hoten << "\t" << (*(sv+i)).diem << endl;
}

void hskha (int n, Sinhvien *sv)
{
	float diem = sv[0].diem;
	string ma = sv[0].msv;
	string ht = sv[0].hoten;
	cout << "Cac Sinh vien co Hoc luc Kha:" << endl;
	for (int i = 0; i < n; i++)
	{
	   if (2.5 <= sv[i].diem && sv[i].diem <= 2.8)
	   {
	   	ma = sv[i].msv;
	   	ht = sv[i].hoten;
	   	diem = sv[i].diem;
	   	cout << ma << "\t" << ht << "\t" << diem << endl;
	   }
	   //cout << ma << "\t" << ht << "\t" << diem << endl;
	}
	//cout << "Cac Sinh vien co Hoc luc Kha:" << endl;
	//cout << ma << "\t" << ht << "\t" << diem << endl;
}

void hsgioi (int n, Sinhvien *sv)
{
	float diem = sv[0].diem;
	string ma = sv[0].msv;
	string ht = sv[0].hoten;
	cout << "Cac Sinh vien co Hoc luc Gioi/Xuat sac:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diem >= 3.2)
		{
			ma = sv[i].msv;
			ht = sv[i].hoten;
			diem = sv[i].diem;
			cout << ma << "\t" << ht << "\t" << diem << endl;
		}
	}
	//cout << "Cac Sinh vien co Hoc luc Gioi/Xuat sac:" << endl;
	//cout << ma << "\t" << ht << "\t" << diem << endl;
}
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien [100];
	nhap (n,sv);
	cout << "Danh sach SV da nhap:" << endl;
	xuat (n,sv);
	hskha (n,sv);
	hsgioi (n,sv);
return 0;
}

