// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program generates a random number and outputs "too high" or "too low" as you try to guess the number while also tracking number of guesses.

#include <iostream>
#include <random>

using namespace std;

int main()
{
    int UserGuess; 

    random_device rd; 
    mt19937 gen(rd()); 

    uniform_int_distribution<> dist(1, 999); 


    int randomNumber1 = dist(gen); 

    cout << "Guess the Random Number (Integer 1-999)";
    cin >> UserGuess;


    for (int row = 1; row <= TotalRows; row++) { 
        for (int i = 1; i <= row; i++) {
            cout << "+";
        }
        cout << endl;
    }

  return 0;
}




