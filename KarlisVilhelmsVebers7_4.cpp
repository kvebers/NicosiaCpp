// KarlisVilhelmsVebers7_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Car {
	char number[10];
	double miles;
	double gallons;
	double milespgallon;
};
int main()
{
	Car car[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter the number of the car ";
		cin >> car[i].number;
		cout << "Enter miles covered ";
		cin >> car[i].miles;
		cout << "Enter the galons used ";
		cin >> car[i].gallons;
		car[i].milespgallon = car[i].miles / car[i].gallons;

	}
	for (int i = 0; i < 5; i++) {
		cout << "car number: " << car[i].number << endl;
		cout << "Miles per Gallon: " << car[i].milespgallon << endl;

	}

	
}
