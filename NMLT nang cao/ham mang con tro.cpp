#include <iostream>
using namespace std;

// nhap mang gom n phan tu
void nhapmang (int &n, int *a)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i <<"] = ";
		cin >> *(a+i);
	}
}

// hien thi mang ra man hinh
void xuatmang (int n, int *a)
{
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(a+i);
	}
}

// tim vi tri cua phan tu nho nhat
void TimvitriMIN (int n, int *a)
{
	int i, min = *a;
	for (i = 0; i < n; i++) 
	{
	   if (*(a+i) < min) {
	   	min = *(a+i);
	   }
    }
    for (int i = 0; i < n; i++)
    {
    	if (min == *(a + i))
    		cout<<i<< " ";
	}
	//return min;
}

// tim so lon nhat
int MAX (int n, int *a)
{
	int max = *a;
	for (int i = 0; i < n; i++)
	   if (max < *(a+i))
	   max = *(a+i);
return max;
}

// nhap x tu ban phim, ktra xem x có trong mang khong
int Timx (int n, int *a, int x)
{
    for (int i = 0; i < n; i++)
        if (*(a+i) == x)
        return i;
}

// sap xep mang theo thu tu tang dan
void Mangtangdan (int n, int *a)
{
	int temp, i, j, k;
	for (int j = 0; j < n; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (*(a+j) > *(a+k))
			{
				temp = *(a+j);
				*(a+j) = *(a+k);
				*(a+k) = temp;
			}
		}
	}
	cout << "\nCac so sau khi duoc sap xep tang dan la: ";
	for (i = 0; i < n; i++)
	cout << " " << *(a+i);
}

// tính tong cac phan tu le co trong mang
void lietkesole (int n, int *a)
{
	cout << "\nCac so le trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) % 2 != 0)
		{
			cout << " " << *(a+i);
		}
	}
}
int Tongsole (int n, int *a)
{
	int i, d = 0;
	for (i =0; i < n; i++)
	{
		if (*(a+i) % 2 != 0)
		{
			d += *(a+i);
		}
	} return d;
}
int main()
{
	int n, x;
	int *a = new int [n];
    nhapmang (n,a);
    xuatmang (n,a);
    cout << "\nVi tri cua gia tri Min la: " ;
	TimvitriMIN (n,a);
    cout << "\nSo lon nhat la: " << MAX (n,a);
    cout << "\nNhap phan tu x can tim: "; cin >> x;
    cout << "Vi tri cua phan tu la: " << Timx(n,a,x);
    Mangtangdan (n,a);
    lietkesole (n,a);
    cout << "\nTong cac so le la: " << Tongsole (n,a);
return 0;
}

