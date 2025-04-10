// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays population numbers from a provided data file in a bar chart format.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string TownName;
	string FileName;

	cout << "Enter Town Name:";
	cin >> TownName;

	cout << "Enter Data File Name:";
	cin >> FileName;

	ifstream InputFile("People.txt");
	if (!InputFile) {
		cerr << "Error. Could not access target data file.";
		return 1;

		}
  return 0;
}




