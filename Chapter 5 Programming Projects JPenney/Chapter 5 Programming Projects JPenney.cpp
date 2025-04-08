// Chapter 5 Programming Projects JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates population growth per day over time.

#include <iostream>

using namespace std;

int main()
{
	float StartingPopulationSize;
	float AverageDailyPopulationIncrease;
	float ElapsedTimeInDays;

  cout << "Enter Starting Population Size:\n";
  cin >> StartingPopulationSize;

  cout << "Enter Average Daily Population Increase:\n";
  cin >> AverageDailyPopulationIncrease;

  cout << "Enter Total Time Elapsed in Days:\n";
  cin >> ElapsedTimeInDays;


}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	int FunctionChoice;
	double AreaOfShape = 0.0f;
	float CircleRadius;
	float RectangleLength;
	float RectangleWidth;
	float TriangleBase;
	float TriangleHeight;


	cout << "Geometry Calculator:\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice(1-4):\n";
	cin >> FunctionChoice;


	if (FunctionChoice == 1)
	{
		cout << "Calculate the Area of a Circle\n";
		cout << "Enter circle radius:\n";
		cin >> CircleRadius;
		if (CircleRadius >= 0)
		{
			AreaOfShape = CircleRadius * CircleRadius * 3.14159;
		}

		else
		{
			cout << "Input Error.You must enter a positive value.\n";
			return 1;
		}
	
	return 0;
}



