#include <iostream>

using namespace std;

struct node{
	int data;
	node* next;     //pointer
};

class linkedList            //class
{
private:
	node* head;             //pointer to first element
	node* last;             //pointer to last element

public:
	linkedList();           //constructor
	int input();            //user inputs values to list
	bool IsEmpty(node* head);           //returns if list is empty; parameter of pointer to front of list
	bool IsFull();
	int remove();           //removes element from list
	int display();          //dispalys the list
	int clear();            //clears the list


};

linkedList::linkedList()                //constructor
{
	head = NULL;                        //sets front of list to 0
	last = NULL;                        //sets end of list to 0
}

bool linkedList::IsEmpty(node* head)            //fucntions for empty list (true/false)
{
	if (head == NULL)            //front of list = 0;return true
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool linkedList::IsFull()           //functions for full list   (true/false)
{
	node *temp;             //pointer to temporary element
	if ((temp = new node))
	{
		delete temp;
		return false;
	}
	return true;
}

int linkedList::input()  //function to add elements to the list
{
	int num;
	node *temp = new node;              //creats the node
	cout << "Enter data to the list" << endl;
	cin >> num;
	temp->data = num;           //set data to "num"
	temp->next = NULL;          //sets next to 0

	if (!IsFull())
	{
		if (IsEmpty(head))
		{
			head = temp;    //head now equals our temp element

		}
		else                //last points to next which is our temp value
			last->next = temp;
	}


	last = temp;
	return 0;
}

int linkedList::remove()        //functions removes elements from list
{
	node *temp = new node;          //creates the node
	if (IsEmpty(head))             //if statement is list is already empty
	{
		cout << "list is empty" << endl;
	}
	else
	{
		temp = head;                    //temportary values eqauls front value
		head = head->next;
		cout << "Value deleted" << endl;
		cout << temp->data << endl;    //displays the deleted value
		delete temp;            //deletes the value

	}


	return 0;
}

int linkedList::display()  //fucntion displays the list
{
	node *temp = new node;    //creates the node
	temp = head;
	if (IsEmpty(head))           //checks if list is already empty
	{
		cout << "The list is empty " << endl;
	}
	else
	{
		cout << "---------------" << endl;

		while (temp != NULL)//if temporary value is not empty
		{
			cout << temp->data << endl;   //displays the elements
			temp = temp->next;
		}
	}

	return 0;
}

int linkedList::clear() //same as constructor
{
	head = NULL;
	last = NULL;
	return 0;
}
int main()
{
	linkedList list;
	int choice;

	while (true)
	{
		cout << "-----------" << endl;         //menu
		cout << "1. Add" << endl;
		cout << "2. Remove" << endl;
		cout << "3. Display " << endl;
		cout << "4. Clear" << endl;
		cout << "5. Exit" << endl;
		cout << "-----------" << endl;
		cout << "user -> ";
		cin >> choice;


		while (choice < 7)
		{
			if (choice == 1)
			{
				list.input();
				break;
			}
			else if (choice == 2)
			{
				list.remove();
				break;
			}
			else if (choice == 3)
			{
				list.display();
				break;
			}
			else if (choice == 4)
			{
				list.clear();
				break;
			}
			else if (choice == 5)
			{
				exit(0);

			}
			else
			{
				cout << "not an option" << endl;
			}

		}
	}
	return 0;
}
