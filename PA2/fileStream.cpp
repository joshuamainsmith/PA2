#include <fstream>
#include <iostream>

using namespace std;

// Reading
double readFile ()
{
}


// Writing
double writeFile (char data[100])
{
	ofstream outfile;
	outfile.open("input.dat");

	outfile << data << endl;


	cout << "Enter the student ID: ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;


	cout << "Enter the GPA of the student (on a 4.0 scale): ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;


	cout << "Enter Class Standing (1 for Freshman, 2 for Sophomore, 3 for Junior, 4 for Senior): ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;


	cout << "Enter age: ";
	cin >> data;
	cin.ignore();

	outfile << data << endl;
	
	outfile.close();
	cout << "Here's the input:" << endl << endl;

	ifstream infile;

	infile.open("input.dat");

	infile >> data;

	cout << data << endl;

	infile >> data;

	cout << data << endl;

	infile.close();
}


int main ()
{
	int option=0;
	char input[100];

	// Reading or Writing
	cout << "1. Reading" << endl;
	cout << "2. Writing" << endl;
	cin >> option;
	
	switch (option)
	{
		case 1: // Reading
			readFile();
			break;
		case 2: // Writing
			writeFile(input);
			break;
	}

	return 0;
}







	/* Testing out the basic syntax
	 * Taken Directly from tutorialspoint.com 
	 * Left for reference */
/*
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
*/
