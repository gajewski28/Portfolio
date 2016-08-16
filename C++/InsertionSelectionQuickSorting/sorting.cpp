///////INSERTION SORT////////////
// insertion sort is stable, it doesn't change the relative order of elements with equal keys


#include <iostream>

using namespace std;

int insertion_sort(int arr[], int x)
{
	int temp, i, j;

	for (i = 1; i<x; i++)
	{
		j = i;

		while (j>0 && arr[j - 1] > arr[j])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
	return 0;
}

int selection_sort(int arr[], int x)
{
	int temp, position;

	for (int i = 0; i < x - 1; i++)
	{
		position = i;

		for (int j = i + 1; j < x; j++)
		{
			if (arr[j] < arr[position])
			{
				position = j;   //swap
			}

		}
		if (position != i)
		{
			temp = arr[i];         
			arr[i] = arr[position];
			arr[position] = temp;
		}


	}
	return 0;
}

//quick sort is not stable, the relative order of equals sort items is not preserved
int quick_sort(int arr[], int left, int right)
{
	int temp, pivot;
	int i = left;
	int j = right;

	pivot = arr[(left + right) / 2];
	do
	{
		while (arr[i] < pivot)
			i++;
		while (pivot < arr[j])
			j--;

		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);

	if (left<j)
	{
		quick_sort(arr, left, j);
	}
	if (i < right)
	{
		quick_sort(arr, i, right);
	}



	return 0;
}

int main()
{
	//------------------------INSERTION-SORT---------------------------------
	int i;
	const int x = 7;
	int  arr[x] = { 9, 61, 7, 77, 13, 25, 11 };

	cout << "Array before sort(insertion): " << endl;

	for (i = 0; i<x; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	insertion_sort(arr, x);


	cout << "values sorted(insertion): " << endl;

	for (i = 0; i<x; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;

	//-----------------------SELECTION-SORT---------------------------------
	const int n = 7;
	int  arr_1[n] = { 9, 61, 7, 77, 13, 25, 11 };

	cout << "Array before sort(selection): " << endl;

	for (i = 0; i<n; i++)
	{
		cout << arr_1[i] << " ";
	}
	cout << endl;

	selection_sort(arr_1, n);


	cout << "values sorted(selection): " << endl;

	for (i = 0; i<x; i++)
	{
		cout << arr_1[i] << " ";
	}
	cout << endl;
	cout << endl;

	//--------------------QUICK-SORT-----------------------------------

	const int m = 7;
	int  arr_2[m] = { 9, 61, 7, 77, 13, 25, 11 };

	cout << "Array before sort(quick_sort): " << endl;

	for (i = 0; i<m; i++)
	{
		cout << arr_2[i] << " ";
	}
	cout << endl;

	quick_sort(arr_2, 0, m - 1);


	cout << "values sorted(quick_sort): " << endl;

	for (i = 0; i<m; i++)
	{
		cout << arr_2[i] << " ";
	}
	cout << endl;
	cout << endl;
	return 0;
}