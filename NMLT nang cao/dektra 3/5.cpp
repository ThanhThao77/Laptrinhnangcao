#include<bits/stdc++.h>
using namespace std;
void nhap(string &s)
{
	cout<<"Nhap Ho va ten:";
	getline(cin,s);
}
void space(string &s)
{
	while(s[0]==' ')
		s.erase(0,1);
	while(s[s.size()-1]==' ')
		s.erase(s.size()-1,1);
	for(int i=0;i<s.size();i++)
	{
		while(s[i]==' '&&s[i+1]==' ')
			s.erase(i,1);
	}	
}
void thuong(string &s)
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]);
}
void hoa(string &s)
{
	s[0]=toupper(s[0]);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
	}
}
void ten(string s)
{
	int dem;
	string a;
	for(int i=s.size()-1;i>=0;i--)
		if(s[i]==' ')
		{
			dem=i;
			break;
		}
	for(int i=dem+1;i<s.size();i++)
		a.push_back(s[i]);
	cout<<"\nTen:"<<a;
}
int main()
{
	string s;
	nhap(s);
	space(s);
	thuong(s);
	hoa(s);
	cout<<"Chuan hoa:"<<s;
	ten(s);
}

