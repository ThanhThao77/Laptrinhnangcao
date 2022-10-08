#include <iostream>
#include <cmath>
using namespace std;

struct Node {
	int data;
	Node *pNext;
};

Node *CreateNode (int a)
{
	Node *q = new Node;
	q -> data = a;
	q -> pNext = NULL;
	return q;
}

void CreateList (Node *&q)
{
	q = NULL;
}

void Themvaodau (Node *&q, int x)
{
	Node *p;
	p = CreateNode (x);
	if (q == NULL)
	q = p;
	else {
		p -> pNext = q;
		q = p;
	}
}

void Themvaocuoi (Node *&p, int x)
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

void inra (Node *L)
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
	int n,a;
	do {
		cout << "Cho n = "; cin >> n;
	} while (n < 5 || n > 10);
	Node *L;
	CreateList (L);
	for (int i = 0; i < n ; i++)
	{
		cout << "Nhap phan tu thu " << i+1 << ": "; cin >> a;
		Themvaocuoi (L,a);
	}
	cout << "Hien thi danh sach: ";
	inra (L);
	
	int c;
	cout << "\nCho x = "; cin >> c;
	cout << "Hay them x vao dau va cuoi danh sach!";
	cout << "\nHien thi danh sach: ";
	Themvaodau (L,c);
	Themvaocuoi (L,c);
	inra (L);
	cout << "\nHay xoa 2 phan tu o dau danh sach!";
return 0;
}


