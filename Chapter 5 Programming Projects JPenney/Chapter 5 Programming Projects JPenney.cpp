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


    int RandomNumber = dist(gen);  
     
    int GuessCount = 0;

    cout << "Guess the Random Number (Integer 1-999):\n";
    
    do {
        cin >> UserGuess; 
        GuessCount++; 

        if (UserGuess > RandomNumber) { 
            cout << "Too high, try again." << endl;
        }
        else if (UserGuess < RandomNumber) { 
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "You guessed the correct number." << endl;
            cout  << GuessCount << " Total Guesses." << endl; 
        }
    } while (UserGuess != RandomNumber);  

  return 0;
}




