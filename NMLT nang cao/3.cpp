#include <iostream>
#include <string>
using namespace std;
struct node {
	double data;
	node *pNext;
}; 
node *Createnode (double a){
	node *q = new node;
	q->data = a;
	q ->pNext = NULL;
	return q;
}
void createList (node *&q){
	q = NULL;
}
void themvaodau(node *&q,double x){
	node *p;
	p = Createnode (x);
	if (q ==NULL) q=p;
	else {
		p->pNext =q;
		q =p;
	}
}
void themsau(node *&p,double x)
{
	
	node *q;
	q = Createnode (x);
	node *r;
	if(p==NULL)
		p=q;
	else
	{
		r=p;
		while(r->pNext!=NULL)
		{
			r=r->pNext;
		}
		r->pNext=q;
	}
	}
node *xoadau (node *&L){
	node *q;
	if (L==NULL) return 0;
	q=L;
	L=L->pNext;
	q->pNext=NULL;
	delete(q);
	return L;	
}
void in(node *L){
	node *r =L;
	while (r!=NULL){
		cout<<" "<<r->data;
		r=r->pNext;
	}
}
int main ()
{
	int n;
	double a;
	do {
		cout<<"Cho so phan tu n = "; cin>>n;
	}
	while (n<=4);
	node *L;
	createList(L);
	for (int i =0;i<n;i++){
			cout<<"Nhap phan tu thu "<<i+1<<": ";
			cin>>a;
			cin.ignore(); 
			themsau(L,a);}
			cout<<endl;
	cout<<"Hien thi danh sach:";
	in(L);
	double c;
	cout<<"\nCho x = ";cin>>c;
	cout<<"Hay them x vao dau va cuoi danh sach.";
	cout<<"\nHien thi danh sach:";
	themvaodau(L,c);
	themsau(L,c);
	in(L);
	cout<<"\nDo dai cua DS = "<<n+2; 
	return 0;
}


