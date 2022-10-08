#include <iostream>
#include <cmath>
using namespace std;
struct SV {
	int ma;
	string ht;
};
struct Node {
	SV data;
	Node *pNext;
};

Node * Khoitao (Node *p)
{
	p = NULL;
	return p;
}
Node * chen_dau (Node *p, SV a)
{
	Node *q = new Node;
	q -> data = a;
	q -> pNext = p;
	p = q;
	return p;
}
void duyetDS (Node *p)
{
	Node *r = p;
	while (r != NULL)
	{
		cout<< r -> data.ma << " ";
		r = r -> pNext;
	}	
}

/*Node * chen_cuoi (Node *p, SV x)
{
	Node *q, *x;
	q = new Node;
	q -> data = x;
	q -> pNext = NULL;
	if (p == NULL)
	p = q;
	
}*/
int main()
{
	int n, x;
	SV a;
	Node *p;
	Khoitao(p);
	cout << "Nhap so SV la: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
	cin.ignore();
		cout << "Ho ten sinh vien: "; getline (cin, a.ht);
		cout << "Ma sinh vien: "; cin >> a.ma;
		chen_dau (p,a);
	}
	cout << "Danh sach sinh vien vua nhap la: ";
	duyetDS(p);
return 0;
}

