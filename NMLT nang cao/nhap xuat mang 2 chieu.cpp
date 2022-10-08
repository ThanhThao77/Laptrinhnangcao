#include <iostream>
#include <cmath>
using namespace std;
void nhapmang (int a[][100], int &n)
{
	cout << "Nhap kich thuoc ma tran: "; cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "a["<< i <<"]["<< j <<"] = "; 
			cin >> a[i][j];
		}
		cout << endl;
	}
}
void xuatmang (int a[][100], int n)
{
	cout << "Ma tran la:\n";
	for (int i = 0;i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
int GTNN (int a[][100], int n)
{
	int min = a[0][0];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			if (a[i][j]<min) 
			min=a[i][j];
	}
	return min;
}
int GTLN (int a[][100], int n)
{
	int k;
	cout << "\nNhap cot K = "; cin >> k;
	int max = a[k][0];
	for (int j = 1; j <= n; j++)
	{
		if (a[k][j] > max)
		max = a[k][j];
	}
	return max;
}
void nguyenduong (int a[][100], int n)
{
	int k;
	cout << "\nNhap cot K = "; cin >> k;
	cout << "\nCac so nguyen duong tren cot K: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i][k] > 0) 
		cout << a[i][k] <<" ";
	}
}
double TBC (int a[][100], int n)
{
	int d = 0, s = 0;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; i < n; j++)
		{
			if (i == j)
			{
				d++;
				s += a[i][j];
			}
		}
	} return (double)s/d;
}
void sapxep (int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int k = i+1; k < n; k++)
			{
				if (a[i][j] < a[k][j])
				{
					int temp = a[i][j];
						a[i][j] = a[k][j];
						a[k][j] = temp;
				}
			}
		}
	}
	cout << "\nMang sau khi sap xep la:\n";
	xuatmang(a,n);
}
void SCP (int a[][100], int n)
{
	cout << "\nCac so chinh phuong cua duong cheo phu : ";
	for (int i = 0; i < n; i++)
	{	
		if (sqrt(a[i][n-1-i]) == ceil(sqrt(a[i][n-1-i])))
		cout << a[i][n-1-i] << " ";
	}
}
int main()
{
	int a[100][100],n;
	nhapmang(a,n);
	xuatmang(a,n);
	cout << "\nGia tri min = " <<GTNN(a,n);
	cout << "\nGia tri lon nhat tren hang K la: " << GTLN(a,n);
	nguyenduong(a,n);
	cout << "\nTrung binh cong duong cheo chinh: " << TBC(a,n);
	sapxep(a,n);
	SCP(a,n);
return 0;
}

