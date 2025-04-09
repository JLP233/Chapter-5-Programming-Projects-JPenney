// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program counts the total number of students listed in a text file then displays the alphabetical first and last students' names.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputfile("LineUp.txt")
		if (!inputfile) {
			cerr << "Error. Could not open LineUp.txt file" << endl;
			return 1;

		}

  

  return 0;
}




