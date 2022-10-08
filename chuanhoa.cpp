#include<iostream>
#include<string>
using namespace std;
string chuan_hoa(string &s)
{
	for(int i=0; i<s.length(); i++)	
	{
		if(s[i] == ' ' && s[i+1] == ' ' ){
			s.erase(i,1);	i--;	
		}
	}
	if(s[0] == ' ')
		s.erase(0,1);
	if(s[s.length()-1] == ' ')
		s.erase(s.length()-1,1);
	for(int i=0; i<s.length(); i++)
	{
		s[i] = tolower(s[i]);
			}		
	s[0] = toupper(s[0]);
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ' ')
		s[i+1] = toupper(s[i+1]); 
	}
	return s;
}
string tach_ten(string s)
{
	string w;
	for(int i = s.length()-1; i>=0; i--)
	{
		if(s[i] == ' ') break;
		w = w + s[i];
	}
	s = "";
	for(int i = w.length()-1; i>=0; i--)
		s = s + w[i];
	return s;

}
int main()
{
	string s;
	cout<<"Nhap Ho va ten:";getline(cin, s);
	cout << "Chuan hoa:" << chuan_hoa(s);
	cout<<"\nTen:"<<tach_ten(s);
}
