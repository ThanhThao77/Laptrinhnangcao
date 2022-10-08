#include <iostream>
#include <string>
using namespace std;
struct Sinhvien {
	string msv;
	string ten;
	float diem;
};

void nhap (int &n, Sinhvien *sv)
{
	cout << "Nhap so sinh vien n = "; cin >> n;
	for (int i=0; i<n;i++)
	{
		cin.ignore();
		cout << "Nhap Ma SV: "; getline (cin, sv[i].msv);
		cout << "Nhap Ten SV: "; getline (cin, sv[i].ten);
		cout << "Nhap Diem: "; cin >> (*(sv+i)).diem;
	}
}
void xuat (int n, Sinhvien *sv)
{
	for (int i=0; i <n; i++)
	{
		cout << (*(sv+i)).msv << "\t" << (*(sv+i)).ten << "\t" << (*(sv+i)).diem << endl;
	}
}

void tangdan (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
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
//	xuat (n,sv);
	tangdan (n,sv);
return 0;
}

