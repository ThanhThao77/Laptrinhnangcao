#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap mang so: "; cin >> n;
	int* x;
	x = new int[n];
	cout << "Nhap gia tri cac phan tu:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i <<"] = "; cin >> *(x+i);
	}

	cout << "mang vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
	cout << " " << *(x+i);
    }
	cout << "\nPhan tu lon nhat la: ";
	int max = *x;
	for (int i = 0; i < n; i++)
	{
		if (max < *(x + i)) 
		max = *(x+i);
	}
	cout << max;
	
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (*(x+i) < *(x+j))
			{
				temp = *(x+i);
				*(x+i) = *(x+j);
				*(x+j) = temp;
			}
		}
	}
	cout << "\nMsng sap xep theo thu tu giam dan la: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(x+i);
	}
	
	int tong = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(x+i) > 0)
		{
			dem++;
			tong = tong + *(x+i);
		}
	}
	cout << "Trung binh cong = " << double (tong)/dem;
	
	int y, k;
	cout << "Nhap so nguyen y: ";
	cin >> y;
	cout << "Nhap so nguyen k: ";
	cin >> k;
	for (int i = n; i > k+1; i--)
	{
		*(p+i) = *(p+i - 1);
	}
	*(p + k + 1) = y;
	n++;
	cout << "\nMang sau khi chen: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(p+i);
	}
return 0;
}

