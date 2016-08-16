#include<iostream>
#include<conio.h>

using namespace std;

int mean(int[], int);
int median(int[], int);
int mode(int[], int);

int main()
{
	int a[100];
	int b = 1;
	int size;
	cout << "How values do you want to enter? : ";
	cin >> size;
	if (size>100)
	{
		cout << "Entered size is too large!";
	}
	else
	{
		while (b <= size)
		{
			cout << "Enter a number " << b << " : ";
			cin >> a[b];
			b = b + 1;
		}
		mean(a, size);
		cout << endl;
		median(a, size);
		cout << endl;
		mode(a, size);
	}

	return 0;
}

int mean(int a[100], int size)
{
	int b = 1;
	int c = 0;
	while (b <= size)
	{
		c = a[b] + c;
		b = b + 1;
	}
	cout << "Mean is : " << c / size;
	return 0;
}

int median(int a[100], int size)
{
	int b = 1;
	int temp;
	int c = 1;
	int d;
	while (b <= size)
	{
		while (c<size)
		{
			if (a[c] >= a[c + 1])
			{
				temp = a[c];
				a[c] = a[c + 1];
				a[c + 1] = temp;
			}
			c = c + 1;
		}
		c = 1;
		b = b + 1;
	}
	c = size % 2;
	d = size / 2;
	if (c == 1)
	{
		cout << "Median is : " << a[d + 1];
	}
	else if (c == 0)
	{
		cout << "Median is : " << a[d + 1] << " and " << a[d + 2];
	}
	return 0;
}

int mode(int a[100], int size)
{
	int b = 1;
	int f = 0; 
	int i = 0;
	int c = 1;
	int maxi = 0;
	int mode = 0;
	while (b <= size)
	{
		c = 1;
		maxi = 0;
		while (c <= size)
		{
			if (a[b] == a[c])
			{
				maxi = maxi + 1;;
			}
			c = c + 1;
		}
		if (maxi >= i)
		{
			mode = a[b];

			i = maxi;

			f = f + maxi;
		}
		b = b + 1;
	}
	if (f>size)
	{
		cout << "No mode exists!";
	}
	else
	{
		cout << "Mode is " << mode;
	}
	return 0;
}