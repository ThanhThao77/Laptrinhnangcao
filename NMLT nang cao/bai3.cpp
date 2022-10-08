#include <iostream>
using namespace std;

struct Node {
	double data;
	Node *pnext;
};
typedef Node *List;

void Init (List &L)
{
	L = NULL;
}

void IsEmpty (List L)
{
	if (L == NULL)
	  cout << "DS rong!\n";
	else 
	  cout << "DS khong rong!\n";
}

List CreateNode (double x)
{
	Node *node = new Node;
	node -> data = x;
	node -> pnext = NULL;
	return node;
}

List Themvaodau (List L, double x)
{
	Node *p = new Node;
	p -> data = x;
	p -> pnext = L;
	L = p;
	return L;
}

List Themvaocuoi (List L, double x)
{
	List temp, p;
	temp = CreateNode (x);
	if (L == NULL)
       L = temp;
    else {
    	p = L;
    	while (p -> pnext != NULL)
    	p = p -> pnext;
    	p -> pnext = temp;
	} return L;
}

double Length (List L)
{
	double count = 0;
	Node *node = L;
	while (node != NULL)
	{
		count ++;
		node = node -> pnext;
	}
}

void nhap (List &L, double n)
{
	double x;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i+1 << ": ";
		cin >> x;
		if (L == NULL)
		   L = Themvaodau (L,x);
		else 
		   L = Themvaocuoi (L,x);
	}
}

void xuat (List L)
{
	Node *p = L;
	cout << "\nHien thi danh sach: ";
	while (p != NULL) 
	{
		cout << p -> data << " ";
		p = p -> pnext;
	}
}

int main()
{
	List L;
	Init (L);
	//IsEmpty (L);
	double n;
	cout << "Cho so phan tu n = "; cin >> n;
	nhap (L,n);
	xuat (L);
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach.";
	for (int i = 0; i < n; i++)
	{
	xuat(Themvaodau (L,x));
	xuat(Themvaocuoi (L,x));
}
	cout << "\nDo dai cua DS = " << Length(L);
return 0;
}

