#include <iostream>


using namespace std;

int power(int x, int y)
{
	if (y == 1)
		return x;
	else
		return x * power(x, y - 1);
}

void main()
{
	int number;
	int exponent;
	int value=1;

	cout << "Recursive fucntion" << endl;

	cout << "Enter a number " << endl;
	cin >> number;
	       
	cout << "Enter the exponent " << endl;
	cin >> exponent;

	cout << power(number, exponent);
	cout << endl;
	cout << endl;
	cout << "Iterative fucntion" << endl;
	

	cout << "Enter a number " << endl;
	cin >> number;

	cout << "Enter the exponent " << endl;
	cin >> exponent;

	for (int x = 1; x <= exponent; x++)
	{
		value = value*number;
	}

	cout << value;






}





