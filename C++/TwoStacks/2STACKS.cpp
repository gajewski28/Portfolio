#include<iostream>
#include<iomanip>

using namespace std;

const int MAXSIZE = 10;

class twoStacks
{
private:
	int arr_1[MAXSIZE];
	int topLeft, topRight;
	int totalLeft, totalRight;
public:
	twoStacks();
	int pushLeft(int item);
	int pushRight(int item);
	int popLeft();
	int popRight();
	bool isEmptyStackLeft()const;
	bool isEmptyStackRight()const;
	int countLeftStackElements();
	int countRightStackElements();
	int display();
	void clear();
};






twoStacks::twoStacks()  // constructor
{
	topLeft = -1;
	topRight = MAXSIZE;
	totalLeft = 0;
	totalRight = 0;

}

void twoStacks::clear()
{
	topLeft = -1;
	topRight = MAXSIZE;
	totalLeft = 0;
	totalRight = 0;

}



int twoStacks::pushLeft(int x)
{
	// There is at least one empty space for new element
	if (topLeft < topRight - 1)
	{
		topLeft++;
		arr_1[topLeft] = x;
		totalLeft += 1;
	}
	else
	{
		cout << "Stack Overflow";
	}
	return 0;
}

// Method to push an element x to stack2
int twoStacks::pushRight(int x)
{

	if (topLeft < topRight - 1)
	{
		topRight--;
		arr_1[topRight] = x;
		totalRight += 1;
	}
	else
	{
		cout << "Stack Overflow";

	}
	return 0;
}


int twoStacks::popLeft()
{

	int x = arr_1[topLeft];
	topLeft--;
	totalLeft -= 1;
	return x;



}

// Method to pop an element from second stack
int twoStacks::popRight()
{
	int x = arr_1[topRight];
	topRight++;
	totalRight -= 1;
	return x;

}
bool twoStacks::isEmptyStackLeft()const
{
	return topLeft == -1;

}

bool twoStacks::isEmptyStackRight()const
{
	return topRight == MAXSIZE;
}

int twoStacks::display()
{
	if (isEmptyStackLeft() && isEmptyStackRight())
		cout << "Empty List" << endl;
	cout << "LEFT STACK" << endl;

	cout << "|       |" << endl;

	for (int i = 0; i <= topLeft; i++)
	{
		cout << "|_  " << arr_1[i] << "  _|" << endl;
	}
	cout << "|_______|" << endl;

	cout << "RIGHT STACK " << endl;

	cout << "|       |" << endl;

	for (int j = 9; j >= topRight; j--)
	{
		cout << "|_  " << arr_1[j] << "  _|" << endl;

	}
	cout << "|_______|" << endl;
	return 0;
}


int twoStacks::countLeftStackElements()
{
	int amountLeft = totalLeft;
	return amountLeft;
}

int twoStacks::countRightStackElements()
{
	int amountRight = totalRight;
	return amountRight;
}


/* Driver program to test twStacks class */
int main()
{
	twoStacks list;
	int choice, number;

	while (true)
	{
		cout << "-----------------------------" << endl;
		cout << " 1. Push the left stack" << endl;
		cout << " 2. Push the right stack" << endl;
		cout << " 3. Pop the left stack" << endl;
		cout << " 4. Pop the right stack" << endl;
		cout << " 5. Display the list" << endl;
		cout << " 6. Clear the list" << endl;
		cout << " 7. Exit" << endl;
		cout << "-----------------------------" << endl;
		cin >> choice;

		while (choice < 8)
		{
			if (choice == 1)
			{
				cout << " Enter a number to add to the left stack" << endl;
				cin >> number;
				list.pushLeft(number);
				break;
			}
			else if (choice == 2)
			{
				cout << "Enter a number to add to the right stack" << endl;
				cin >> number;
				list.pushRight(number);
				break;
			}
			else if (choice == 3)
			{
				if (!list.isEmptyStackLeft())
				{
					cout << "Element removed from left stack is: " << endl;
					cout << list.popLeft() << endl;
					break;
				}
			}
			else if (choice == 4)
			{
				if (!list.isEmptyStackRight())
				{
					cout << "Element removed from right stack is: " << endl;
					cout << list.popRight() << endl;
					break;

				}

			}


			else if (choice == 5)
			{
				cout << "-------------" << endl;
				list.display();


				cout << "total left " << list.countLeftStackElements() << endl;
				cout << "total Right " << list.countRightStackElements() << endl;
				break;

			}

			else if (choice == 6)
			{
				list.clear();
				break;
			}
			else if (choice == 7)
				exit(0);
			else
				cout << "Not an option" << endl;
		}



	}

}

