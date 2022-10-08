#include <iostream>
#include <cstring>
using namespace std;
union Sinhvien
{
	int masv;
	int sdt;
	char ht[30]; // kieu char la 30 byten;'
};
int main()
{
	union Sinhvien p1;
	p1.masv = 1;
	p1.sdt = 1234567822;
	strcpy (p1.ht, "Nguyen Thanh An");
	cout << "masv : " << p1.masv << endl;
	cout << "sdt : " << p1.sdt << endl;
	cout << "ht : " << p1.ht << endl;
return 0;
}


