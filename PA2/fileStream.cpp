#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
	/* Testing out the basics
	 * Taken Directly from tutorialspoint.com 
	 * Left for reference */

	char data[100];

	ofstream outfile;
	outfile.open("somefile.dat");

	cout << "Enter name: ";
	cin.getline(data, 100);

	outfile << data << endl;

	cout << "Enter age: ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;

	outfile.close();

	ifstream infile;
	infile.open("somefile.dat");

	infile >> data;

	cout << data << endl;

	infile >> data;
	cout << data << endl;

	infile.close();

	return 0;
}
