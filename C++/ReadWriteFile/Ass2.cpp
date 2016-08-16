#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)

{

	char filename[20], decryptedtext;
	int key, ciphertext, x;
	string plaintext;

	cout << "Enter the file you wish to open" << endl;
	cin >> filename;

	ofstream outfile;
	outfile.open(filename);


	cout << "Enter a single Character" << endl;
	cin >> plaintext;
	cout << "Enter in an integer" << endl;
	cin >> key;

	for (x = 0; x<plaintext.length(); x++)
	{
		ciphertext = ((int)plaintext[x]) ^ key;
		cout << ciphertext << endl;
	}
	outfile.close();
	return 1;

}