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
	return q;
}
void *CreateList (Node *&q)
{
	q = NULL;
}

void Themvaodau (Node *&q, double a)
{
	Node *p;
	p = CreateNode (a);
	if (q == NULL)
	q = p;
	else {
		p -> pNext = q;
		q = p;
	}
}
void Themvaocuoi (Node *&p, double a)
{
	Node *q;
	q = CreateNode (a);
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
void in (Node *L)
{
	Node *r = L;
	while (r != NULL)
	{
		cout << " " << r -> data;
		r = r -> pNext;
	}
}

/*Node *deletehead (Node *L)
{
	Node *r = L;
	r = r -> pNext;
	delete (L);
	return r;
}*/
int main()
{
	double n, a;
	cout << "Cho n = "; cin >> n;
	/*do {
		cout << "Cho n = "; cin >> n;
	} while (n < 5 || n > 10);*/
	Node *L;
	CreateList (L);
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i+1 << ": ";
		cin >> a;
		Themvaocuoi (L,a);
	}
	cout << "\nIn danh sach:";
	in (L);
	
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach!";
	cout << "\nIn danh sach:";
	Themvaodau (L,x);
	Themvaocuoi (L,x);
	in (L);
	
	/*cout << "\nHay xoa 2 phan tu o dau danh sach!\n";
	Node *l = deletehead(L);
	Node *k = deletehead(l);
	cout << "Hien thi danh sach:";
	in(k);*/
return 0;
}

