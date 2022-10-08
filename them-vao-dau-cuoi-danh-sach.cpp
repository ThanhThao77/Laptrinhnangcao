#include<bits/stdc++.h>
using namespace std;

struct Node {
	float data;
	Node *pNext;
};

Node *khoitao (Node *p) {
	p = NULL;
	return p;
}

Node *chen_cuoi (Node *p, float a) {
	Node *q,*r;
	q=new Node;
	q->data=a;
	q->pNext=NULL;
	if(p==NULL) p=q;
	else{
		r=p;
		while(r->pNext != NULL) r=r->pNext;
		r->pNext=q;
	}
	return p;
}

void duyetDS (Node *p) {
	Node *tam;
	tam = p;
	while (tam != NULL) {
		cout<<" "<<tam->data;
		tam = tam->pNext;
	}
}

Node *chen_dau (Node *p, float a) {
	Node *q = new Node;
	q->data = a;
	q->pNext = p;
	p = q;
	return p;
}

Node *xoa_dau (Node *p) {
	Node *q;
	if (p==NULL) return p;
	q=p;
	p=p->pNext;
	q->pNext=NULL;
	free(q);
	return p;
}

int main() {
	int n;
	float a;
	Node *p;
	p = khoitao(p);
	do {
		cout<<"Cho n = "; cin>>n;
	} while (n<5 || n>10);
	for (int i=0; i<n; i++) {
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a;
		p=chen_cuoi(p,a);
	}
	cout<<"Hien thi danh sach:";
	duyetDS(p);
	float x;
	cout<<"\nCho x = "; cin>>x;
	cout<<"Hay them x vao dau va cuoi danh sach!\n";
	p=chen_dau(p,x);
	p=chen_cuoi(p,x);
	cout<<"Hien thi danh sach:";
	duyetDS(p);
	cout<<"\nHay xoa 2 phan tu o dau danh sach!";
	p=xoa_dau(p);
	p=xoa_dau(p);
	cout<<"\nHien thi danh sach:";
	duyetDS(p);
	return 0;
}
