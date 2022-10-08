#include <iostream>
#include <string>
using namespace std;
int main()
{
	string food = "Pizza";
	cout << food << endl;
	cout << &food << endl;
	string &meal = food;
	cout << food << "\n";
	cout << meal << "\n";
return 0;
}

