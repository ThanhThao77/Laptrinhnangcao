#include <iostream>
#include <string>
using namespace std;
struct Sinhvien {
	string msv;
	string hoten;
	int nam;
};
struct Node {
	Sinhvien data;
	Node *pNext;
};
Node *CreateNode (Sinhvien sv)
{
	Node *q = new Node;
	q -> data = sv;
	q -> pNext = NULL;
	return q;
}
void CreateList (Node *&q)
{
	q = NULL;
}
void Themvaodau (Node *&q, Sinhvien *sv)
{
	Node *p;
	p = CreateNode (sv);
	if (q == NULL)
	q = p;
	else {
		p -> pNext = q;
		q = p;
	}
}
void Themvaocuoi (Node *&p, Sinhvien *sv)
{
	Node *q;
	q = CreateNode (sv);
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
    //	Sinhvien *sv = r -> data;
    	cout << sv -> msv << "\t" << sv -> hoten << "\t" << sv -> nam << endl;
    	r = r -> pNext;
	}
}
int main()
{
	int n;
	Sinhvien *sv = new Sinhvien [100];
	cout << "Cho so phan tu n = "; cin >> n;
	Node *L;
	CreateList (L);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap MaSV: "; getline (cin, sv[i].msv);
		cout << "Nhap ten: "; getline (cin, sv[i].hoten);
		cout << "Nam sinh: "; cin >> (*(sv+i)).nam;
		Themvaocuoi (L,sv);
	}
	cout << "Hien thi danh sach: " << endl;
	in (L);
return 0;
}

