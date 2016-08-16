#include <iostream>

using namespace std;


int iterative(int myArray[], int key, int size)
{
	for (int x = 0; x <= 10; x++)
	{
		if (myArray[x] == key)
			return x;
	}
}
int recursive(int myArray[], int key, int size)
{
	size = size - 1;
	if (size < 0)
		return -1;
	else if (myArray[size] == key)
		return 1;
	else
		return recursive(myArray, key, size);
		

}

void main()
{
	int size = 10;
	int myArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int key;
	int result;


	cout << " Iterative fucntion" << endl;
	cout << "Choose a number in which you want to find: " << endl;
	cin >> key;
	cout << endl;

	if (iterative(myArray, key, size) == 11)

		cout << "This number is not in the array " << endl;
	else

	{
	cout << "Your search # is in the postion: " << iterative(myArray, key, size) << endl;
	cout << "Your search # was: " << key << endl;

	}
	
	cout << "Recursive fucntion" << endl;
	cout << "Choose a number in which you want to find: " << endl;
	cin >> key;
	cout << endl;
	result = recursive(myArray, key, size--);
	if (result == 1)
		cout << "This number is found within the array " << endl;
	else
		cout << "This number is not found within the array" << endl;



}