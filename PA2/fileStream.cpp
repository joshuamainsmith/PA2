#include <fstream>
#include <iostream>

using namespace std;

// Reading
double readFile ()
{
}


// Writing
double writeFile (int studID, float gpa, int studStand, float studAge)
{
	cout << "Enter the student ID: ";
	cin >> studID;
	cout << "Enter the GPA of the student (on a 4.0 scale): ";
	cin >> gpa;
	cout << "Enter Class Standing (1 for Freshman, 2 for Sophomore, 3 for Junior, 4 for Senior): ";
	cin >> studStand;
	cout << "Enter age: ";
	cin >> studAge;
}


int main ()
{
	int option=0, iNum1=0, iNum2=0;
	float fNum1=0, fNum2=0;

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
			writeFile(iNum1, fNum1, iNum2, fNum2);
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
