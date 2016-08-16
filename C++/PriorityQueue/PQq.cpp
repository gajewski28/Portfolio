//Chris Gajewski
//PQ C++
//341 cs
#include <iostream>								
#include <cstdlib>								
#include <vector>								
#include <iterator>
using namespace std;							//standard namespace
/*
* Class Declaration
*/
class BinaryHeap								//declare class
{
private:
	vector <int> heap;							//declare vector
	int left(int parent);						//function for left
	int right(int parent);						//function for right
	int parent(int child);						//function for parent
	void heapifyup(int index);					//function for working
	void heapifydown(int index);				//funcking for broken
public:
	BinaryHeap()								//contructor
	{}
	void Insert(int element);					//function to insert
	void DeleteMin();							//function to remove minumum
	int ExtractMin();							//function to grab smallest
	void DisplayHeap();							//function to display
	int Size();									//function fro size
};
/*
* Return Heap Size
*/
int BinaryHeap::Size()							//function for size
{
	return heap.size();							//return the size
}

/*
* Insert Element into a Heap
*/
void BinaryHeap::Insert(int element)			//function for insert
{
	heap.push_back(element);
	heapifyup(heap.size() - 1);
}
/*
* Delete Minimum Element
*/
void BinaryHeap::DeleteMin()					//function for delete
{
	if (heap.size() == 0)						// if size is 0
	{
		cout << "Heap is Empty" << endl;
		return;
	}
	heap[0] = heap.at(heap.size() - 1);
	heap.pop_back();
	heapifydown(0);
	cout << "Element Deleted" << endl;
}


// Extract Minimum Element
int BinaryHeap::ExtractMin()					//function for extractting smallest
{
	if (heap.size() == 0)						//if empty
	{
		return -1;
	}
	else
		return heap.front();
}


 //Display Heap

void BinaryHeap::DisplayHeap()						//function to display
{
	vector <int>::iterator pos = heap.begin();		//declare vector
	cout << "Heap -->  ";
	while (pos != heap.end())
	{
		cout << *pos << " ";
		pos++;
	}
	cout << endl;
}

/*
* Return Left Child
*/
int BinaryHeap::left(int parent)					///function for left
{
	int l = 2 * parent + 1;
	if (l < heap.size())
		return l;
	else
		return -1;
}

/*
* Return Right Child
*/
int BinaryHeap::right(int parent)					//function for right
{
	int r = 2 * parent + 2;
	if (r < heap.size())
		return r;
	else
		return -1;
}

/*
* Return Parent
*/
int BinaryHeap::parent(int child)					//function for parent
{
	int p = (child - 1) / 2;
	if (child == 0)
		return -1;
	else
		return p;
}

/*
* Heapify- Maintain Heap Structure bottom up
*/
void BinaryHeap::heapifyup(int in)					//function for bottom us structore
{
	if (in >= 0 && parent(in) >= 0 && heap[parent(in)] > heap[in])
	{
		int temp = heap[in];
		heap[in] = heap[parent(in)];
		heap[parent(in)] = temp;
		heapifyup(parent(in));
	}
}

/*
* Heapify- Maintain Heap Structure top down
*/
void BinaryHeap::heapifydown(int in)				//function for top down structure
{

	int child = left(in);
	int child1 = right(in);
	if (child >= 0 && child1 >= 0 && heap[child] > heap[child1])
	{
		child = child1;
	}
	if (child > 0)
	{
		int temp = heap[in];
		heap[in] = heap[child];
		heap[child] = temp;
		heapifydown(child);
	}
}

/*
* Main Contains Menu
*/
int main()								//main function
{
	BinaryHeap h;						//declare class
	while (1)							//while true
	{
		
		cout << "1.Insert Element" << endl;
		cout << "2.Delete Minimum Element" << endl;
		cout << "3.Extract Minimum Element" << endl;
		cout << "4.Print Heap" << endl;
		cout << "5.Exit" << endl;
		int choice, element;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the element to insert: ";
			cin >> element;
			h.Insert(element);
			break;
		case 2:
			h.DeleteMin();
			break;
		case 3:
			cout << "Minimum Element: ";
			if (h.ExtractMin() == -1)
			{
				cout << "Heap is Empty" << endl;
			}
			else
				cout << "Minimum Element:  " << h.ExtractMin() << endl;
			break;
		case 4:
			cout << "Displaying elements of Heap:  ";
			h.DisplayHeap();
			break;
		case 5:
			exit(1);
		default:
			cout << "Enter Correct Choice" << endl;
		}
	}
	return 0;
}