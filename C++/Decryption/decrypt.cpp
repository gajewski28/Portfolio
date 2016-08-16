#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
	char decryptedtext, filename[20];
	int key, ciphertext;
	string plaintext;

	cout << "What file do you wish to open: " << endl;
	cin >> filename;

	ifstream infile;
	infile.open(filename);

	cout << "Please enter in an integer: " << endl;
	cin >> key;

	while (!infile.eof())
{
		infile >> ciphertext;
		decryptedtext = (char)(ciphertext ^ key);
		cout << decryptedtext << endl;
}
}