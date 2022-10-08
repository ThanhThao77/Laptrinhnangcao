#include <iostream>
#include <string>
using namespace std;

enum gender {
	nam = 0,
	nu = 1
};

struct Worker {
	string ID;
	string name;
	gender gioitinh;
	double salary;
};

struct Node {
	Worker data;
	Node *pNext;
};

Node *taonut (int x)
{
	Node *q = new Node;
	q -> data = x;
	q -> pNext = NULL;
	return q;
}

void taoDS (Node *&q)
{
	q = NULL;
}

void Themvaodau (Node *&L, int x)
{
	Node *p;
	p = taonut(x);
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

int main()
{
	int n;
	Node *L;
	taoDS (L)
	cout << "Nhap so nhan vien: "; cin >> n;
	for (int i = 0; i <=n; i++)
	{
		cin.ignore();
		cout << "ID: "; getline (cin,)
	}
	
	
return 0;
}

