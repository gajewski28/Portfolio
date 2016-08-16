#include <iostream>
#include <cmath>
using namespace std;

void Fibonacci(const int n)
{
	int* fib = new int[n];
	for (int i = 2; i<n; i++)
	{
		fib[0] = 0;
		fib[1] = 1;
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < n; i++) cout << fib[i] << ' ';

	delete[] fib;
}

int main(int fib)
{
	cout << "Enter the amount of fibonacci numbers you wish to view." << endl;
	cin >> fib;
	cout << fib << "!" << "=";
	Fibonacci(fib);

	return 0;
}