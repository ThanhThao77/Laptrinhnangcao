#include <iostream>
using namespace std;
struct phanso{
	int tu;
	int mau;
};
void nhap(phanso &p1){
	cout<<"Tu: ";cin>>p1.tu;
	cin.ignore();
		cout<<"Mau: ";
		cin>>p1.mau;
}
int UCLN(int a,int b)
{
	if(b==0) return a;
	return UCLN(b,a%b);
 } 
 void XuatPS(phanso &x)
{
	cout<<"\nTu: "<<x.tu;
	cout<<"\nMau: "<<x.mau;
}
void gianuoc(phanso &p1){
	int c = UCLN(p1.mau,p1.tu);
	p1.mau = p1.mau/c;
	p1.tu = p1.tu/c;
}
void  tichps(phanso a,phanso b)
{
	phanso tich;
	if(a.mau==0||b.mau==0){
				cout<<"Tich a*b = "<<0<<"/"<<0; 
	return ; 
	} 
	else if (a.mau !=0 && b.mau!=0){
		tich.tu=a.tu*b.tu;
		tich.mau=a.mau*b.mau;
	}
	gianuoc(tich);
	cout<<"Tich a*b = "<<tich.tu<<"/"<<tich.mau; 
}
int main (){
	phanso a,b;
		cout<<"Nhap phan so a:"<<endl;
	nhap(a);
		cout<<"Nhap phan so b:"<<endl;
	nhap(b);
	cout << endl;
	tichps(a,b); 
	return 0;
}
