#include <iostream>
#include <string>
using namespace std;

struct Sinhvien
{
	string hoten;
	string malop;
	string msv;
	float diem;
};

void nhapdulieu (int &n, Sinhvien *sv)
{
	cout << "So sinh vien la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Ho ten sinh vien: "; getline(cin, sv[i].hoten);
		cout << "Ma sinh vien: "; getline (cin, sv[i].msv);
		cout << "Ma lop: "; getline (cin, sv[i].malop);
		cout << "Diem: "; cin >> (*(sv + i)).diem;
	}
	cout << "--------------------------------------------------";
}
void xuatdulieu (int n, Sinhvien *sv)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nHo ten SV: " << (*(sv + i)).hoten;
		cout << "\nMa sinh vien: " << (*(sv + i)).msv;
		cout << "\nMa lop: " << (*(sv + i)).malop;
		cout << "\nDiem: " << (*(sv + i)).diem << endl;
	}
	cout << "--------------------------------------------------";
}
void DiemMax (int n, Sinhvien *sv)
{
	float max = sv[0].diem;
	string hoten = sv[0].hoten;
    for (int i = 0; i < n; i++)
	{
		if (max < (*(sv + i)).diem)
		{
			max = (*(sv + i)).diem;
			hoten = (*(sv + i)).hoten;
		}
	}
	cout << "\nSinh vien co diem cao nhat la:\n " << hoten << " - " << max << " diem" << endl;
	cout << "--------------------------------------------------";	
}
void nhapthemSV (int n, Sinhvien *sv)
{
	int i, k;
	do {
	cout << "\nNhap vi tri k: "; cin >> k;
    } while (k > n);
    
    for (i = n; i > k; i--)
    {
       *(sv + i) = *(sv + i - 1);	
	} n++;
	cin.ignore();
	    cout << "Ho ten: "; getline(cin, sv[k].hoten);
		cout << "Ma sinh vien: "; getline (cin, sv[k].msv);
		cout << "Ma lop: "; getline (cin, sv[k].malop);
		cout << "Diem: "; cin >> (*(sv + k)).diem;
	
	cout << "\nDanh sach sinh vien sau khi them la: ";
    xuatdulieu (n,sv);
	
}
void SapxepDiem (int n, Sinhvien *sv)
{
	int temp, i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
		   if ((*(sv + i)).diem < (*(sv + j)).diem)
			{
				temp = (*(sv + i)).diem;
				(*(sv + i)). diem = (*(sv + j)).diem;
				(*(sv + j)).diem = temp;
			}
		}
	}
	cout << "\nDanh sach sinh vien sau khi sap xep theo danh sach giam dan cua diem la: ";
     xuatdulieu (n, sv);	
}

/*void XoaMSV (int &n, Sinhvien *sv)
{
	int x;
	string msv;
	cout << "\nNhap ma sinh vien can xoa: "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		if ((*(sv + i)).msv == msv)
		{
			(*(sv + i)).msv = (*(sv + i +1)).msv;
		} n--;
	cout << "\nDanh sach sinh vien sau khi xoa la: ";
     xuatdulieu (n,sv);
	if (i >= n || i < 0)
	cout << "\nKhong co ma sinh vien nay!";
   }
}*/
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien[100];
	nhapdulieu (n,sv);
	cout << "\nDanh sach sinh vien vua nhap la: ";
	xuatdulieu (n,sv);
	DiemMax (n,sv);
	nhapthemSV (n,sv);
	SapxepDiem(n,sv);
/*	XoaMSV (n,sv);*/
return 0;
}

