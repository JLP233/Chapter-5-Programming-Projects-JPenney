// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates population growth per day over time.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float StartingPopulationSize;
	float AverageDailyPopulationIncrease;
	float ElapsedTimeInDays;
	float NewPopulationSize;

  cout << "Enter Starting Population Size:\n";
  cin >> StartingPopulationSize;

  cout << "Enter Average Daily Population Increase:\n";
  cin >> AverageDailyPopulationIncrease;

  cout << "Enter Total Time Elapsed in Days:\n";
  cin >> ElapsedTimeInDays; 

  if (StartingPopulationSize >= 2 && AverageDailyPopulationIncrease > 0 && ElapsedTimeInDays >= 1)
  {
	  NewPopulationSize = StartingPopulationSize + AverageDailyPopulationIncrease * ElapsedTimeInDays;
	  cout << "New Population Size of:";
	  cout << NewPopulationSize;
  }

  else
  {
	  cout << "Input Error.You must enter a starting population size of 2 or greater.\n";
	  cout << "You must enter an average daily population increase greater than 0.\n";
	  cout << "You must enter an elapsed time in days greater than or equal to 1.\n";
	  return 1;
  }

 

  return 0;
}




