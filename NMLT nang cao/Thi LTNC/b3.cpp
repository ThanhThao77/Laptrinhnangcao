#include <iostream>
#include <string>
using namespace std;

struct Sinhvien {
	int sbd;
	string ht;
	float diem;
};
void nhap (int &n, Sinhvien *sv)
{
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "SBD: "; cin >> (*(sv+i)).sbd;
		cin.ignore();
		cout << "Ho va ten: "; getline (cin, sv[i].ht);
		cout << "Diem: "; cin >> (*(sv+i)).diem;
	}
}
void xuat (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		cout << (*(sv+i)).sbd << "\t" << (*(sv+i)).ht << "\t" << (*(sv+i)).diem << endl;
	}
}
void tangdan (int n, Sinhvien *sv)
{
	for (int i = 0; i < n-1; i++)
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
	cout << "Danh sach sap xep tang dan cua diem:" << endl;
	xuat (n,sv);
}
int main()
{
int n;
Sinhvien *sv = new Sinhvien[100];
nhap (n,sv);
//xuat (n,sv);
tangdan (n,sv);
return 0;
}


