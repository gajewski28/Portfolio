#include <iostream>
#include <string>

using namespace std;

string out;

void recursive(const string name, unsigned int x)
{
	if (x < name.length())
	{
		recursive(name, x + 1);
		out += name[x];

	}
	

}

void iterative(string name)
{
	for (int x = name.length() - 1; x >= 0; x--)
		cout << name[x];

}
void main()
{
	string name;
	
		cout << "What do you want printed in reverse" << endl;
		cin >> name;
		iterative(name);
		cout << endl;
		
		cout << "What do you want printed in reverse" << endl;
		cin >> name;
		recursive(name, 0);
		cout << out;




}