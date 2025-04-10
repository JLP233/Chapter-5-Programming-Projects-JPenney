// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays population numbers from a provided data file in a bar chart format.

#include <iostream>

using namespace std;

int main()
{
	string TownName;
	string FileName;

	cout << "Enter Town Name:";
	getline(cin, TownName);

	cout << "Enter Data File Name:";
	getline (cin, FileName);

	ifstream InputFile(FileName);
	if (!InputFile) {
		cerr << "Error. Could not access target data file." << endl;
		return 1;

		}

	cout << TownName << " Population Growth\n";
	cout << "(Each * represents 1,000 people)" << endl << endl;

	int Year, Population;

	while (InputFile >> Year >> Population) { 
		int StarCount = Population / 1000;
		cout << setw(6) << Year << " ";
		for (int i = 0; i < StarCount; i++) {  
			cout << "*";
		}
		cout << endl;
	}

	InputFile.close();

  return 0;
}




