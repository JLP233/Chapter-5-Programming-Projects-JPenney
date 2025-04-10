// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays population numbers from a provided data file in a bar chart format.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string TownName;
	string FileName;

	cout << "Enter Town Name:";
	cin >> TownName;

	cout << "Enter Data File Name:";
	cin >> FileName;

	ifstream InputFile("FileName");
	if (!InputFile) {
		cerr << "Error. Could not access target data file." << endl;
		return 1;

		}

	cout << TownName << "Population Growth\n";
	cout << "(Each * represents 1,000 people)" << endl;

	int year, population;

	while (InputFile >> year >> population) {
		cout << year << " ";
		for (int i = 0; i < population; i++) {
			cout << "*";
		}
		cout << endl;
	}

	InputFile.close();

  return 0;
}




