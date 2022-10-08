
#include <iostream>
#include <cmath>
using namespace std;
struct Node
{
	int Data;
	Node *pNext;
};
// Tao nut moi
Node *createNode (int x)
{
	Node *q = new Node;
	q -> Data = x;
	q -> pNext = NULL;
	return q;
}

void createList (Node *&q)
{
	q = NULL;
}
void Themvaodau (Node *&L, int x)
{
	Node *p;
	p = createNode(x);
	if (L == NULL)
	L = p;
	else {
		p -> pNext = L;
		L = p;
	}
}
void in_ra_List (Node *L)
{
	Node *r = L;
	while (r != NULL)
	{
		cout << r -> Data << " ";
		r = r -> pNext;
	}
}
int Tinhtong (Node *L)
{
	int s = 0;
	Node *r = L;
	while (r != NULL)
	{
		s = s + r -> Data;
		r = r -> pNext;
	} return s;
}
void SCP (Node *L)
{
	Node *r = L;
	while (r != NULL)
	{
	  if (sqrt(r -> Data) * sqrt(r -> Data) == r -> Data)
	  cout << r -> Data << " ";
	  r = r -> pNext;
	}
}
int Demsochan (Node *L)
{
	int dem = 0;
	Node *r = L;
	while (r != NULL)
	{
	  if (r -> Data % 2 == 0)
	  dem++;
	  r = r -> pNext;	
	} return dem;
}
int main()
{
	int n,x;
	Node *L;
	createList (L);
	cout << "Tao danh sach lien ket\n";
	cout << "Nhap so Node cua danh sach n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap gia tri x = "; cin >> x;
		Themvaodau (L,x);
	}
	cout << "Day so vua nhap la: ";
	in_ra_List (L);
	cout << "\nTong cac so la: " << Tinhtong (L);
	cout << "\nCac so chinh phuong la: ";
	SCP (L);
	cout << "\nCac so chan co trong mang co: " << Demsochan (L) << " so";
return 0;
}

