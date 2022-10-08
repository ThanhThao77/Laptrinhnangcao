#include <iostream>
#include <cmath>
using namespace std;
struct Node {
	double data;
	Node *pNext;
};
Node *CreateNode (double a)
{
	Node *q = new Node;
	q -> data = a;
	q -> pNext = NULL;
}
void CreateList (Node *&q)
{
	q = NULL;
}
void Themvaodau (Node *&q, double x)
{
	Node *p;
	p = CreateNode (x);
	if (q == NULL)
	q = p;
	else {
		p -> pNext =q;
		q = p;
	}
}
void Themvaocuoi (Node *&p, double x)
{
	Node *q;
	q = CreateNode (x);
	Node *r;
	if (p == NULL)
	p = q;
	else {
		r = p;
		while (r -> pNext != NULL)
		{
			r = r -> pNext;
		} r -> pNext = q;
	}
}
void xuat (Node *L)
{
	Node *r = L;
	while (r != NULL)
	{
		cout << " " << r -> data;
		r = r -> pNext;
	}
}
int main()
{
	double a, n;
	do {
		cout << "Cho so phan tu n = ";
		cin >> n;
	} while (n <= 4);
	Node *L;
	CreateList (L);
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i+1 << ": ";
		cin >> a;
		Themvaocuoi (L,a);
	}
	cout << "\nHien thi danh sach:";
	xuat (L);
	
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach.";
	cout << "\nHien thi danh sach:";
	Themvaodau (L,x);
	Themvaocuoi (L,x);
	xuat (L);
	 
	cout << "\nDo dai cua DS = " << n+2;
	
return 0;
}

