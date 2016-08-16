#include <iostream>


using namespace std;

void main(void)
{
	float weight;
	float height;
	float results;
	bool dataValue;

	cout << "Enter your height in inches. " << endl;
	cin >> height;
	cout << "Enter your weight in lbs. " << endl;
	cin >> weight;

	

	
		results = weight * 703 / (height * height);
		cout << "Your BMI is: " << results << endl;

		cout << "Your BMI interpreted. " << endl;
		if (results < 20)
			cout << "underweight. " << endl;
		else if (results <= 25)
			cout << "Normal." << endl;
		else if (results <= 30)
			cout << "Overweight." << endl;
		else 
			cout << "Go to the gym fatty." << endl;

	
}