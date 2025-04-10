// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays a wave pattern using "*" figures.

#include <iostream>
#include <random>

using namespace std;

int main()
{

    random_device rd; 
    mt19937 gen(rd()); 

    uniform_int_distribution<> dist(1, 999); 


    int randomNumber1 = dist(gen); 





    for (int row = 1; row <= TotalRows; row++) { 
        for (int i = 1; i <= row; i++) {
            cout << "+";
        }
        cout << endl;
    }

  return 0;
}



{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dist(1, 999);


    int randomNumber1 = dist(gen);
    int randomNumber2 = dist(gen);

    cout << "Solve the following equation and hit Enter to display the correct answer." << endl;

    cout << randomNumber1 << "+" << randomNumber2 << "=";

    cin.get();

    int sum = randomNumber1 + randomNumber2;
    cout << sum;

    return 0;



