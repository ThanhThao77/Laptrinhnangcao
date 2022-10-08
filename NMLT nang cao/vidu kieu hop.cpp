#include <iostream>
#include <cstring>
using namespace std;
union Sinhvien
{
	int masv;
	int sdt;
	char ht[30];
};
int main()
{
	union Sinhvien p1;
	p1.masv = 1;
	cout << "masv : " << p1.masv << endl;
	strcpy (p1.ht, "Nguyen Thanh An");
	cout << "ht : " << p1.ht << endl;
	p1.sdt = 1234567822;
	cout << "sdt : " << p1.sdt << endl;
return 0;
}

