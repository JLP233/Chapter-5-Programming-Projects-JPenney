// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program counts the total number of students listed in a text file then displays the alphabetical first and last students' names.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream InputFile("LineUp.txt");
		if (!InputFile) {
			cerr << "Error. Could not open LineUp.txt file" << endl;
			return 1;

		}

	string name;
	string FirstStudent; 
	string LastStudent;  
	int count = 0;

	if (InputFile >> name) {
		FirstStudent = LastStudent = name;
		count = 1;
	}

	while (InputFile >> name) {
		count++;
		if (name < FirstStudent) {
			FirstStudent = name;
		}
		if (name > LastStudent) {
			LastStudent = name;
		}
	}

	InputFile.close();

	if (count > 0) {
		cout << "Total number of students: " << count << endl;
		cout << "First in line: " << FirstStudent << endl;
		cout << "Last in line: " << LastStudent << endl;
	}
	else {
		cout << "No student names found in the file." << endl;
	}

  return 0;
}




