#include <iostream>

using namespace std;


int recursive(int myArray[], int number)
{
		if (number == 0)
			return myArray[0];
		else
			return myArray[number]+recursive(myArray, number-1);
}
	


void main()
{
	int myArray[100];
	int value = 0;
	cout << "Iterative fucntion" << endl;


	cout << "Enter the numbers you want the some of: " << endl;
	
	for (int x = 0; x < 100; x++)
	{
		cin >> myArray[x];
	}

	
	for (int x = 0; x < 100; x++)
	{
		value = value+myArray[x];
	}

	cout << "The sum of your number is: " << value << endl;
	cout << endl;
	cout << endl;
	//---------------------------------------------------------------------
	cout << "Recursive fucntion " << endl;

	cout << "Enter the numbers you want the some of: " << endl;
	
	for (int x = 0; x < 100; x++)
	{
		cin >> myArray[x];
	}

	value = recursive(myArray, 99);
	cout << "The sum of your number is: " << value << endl;





}