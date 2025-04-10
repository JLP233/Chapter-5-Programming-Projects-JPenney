// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays a wave pattern using "*" figures.

#include <iostream>


using namespace std;

int main()
{
	int TotalRows = 10;

    for (int row = 1; row <= TotalRows; row++) { 
        for (int i = 1; i <= row; i++) {
            cout << "+";
        }
        cout << endl;
    }
    for (int row = 1; row <= TotalRows; row++) {
        for (int i = 10; i >= row; i--) {
            cout << "+";
        }
        cout << endl;
    }

  return 0;
}




