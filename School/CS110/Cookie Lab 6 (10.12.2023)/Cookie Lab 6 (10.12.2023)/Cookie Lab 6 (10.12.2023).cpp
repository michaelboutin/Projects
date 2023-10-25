/*******************************************

Program:Cookie Lab 6 (10.12.2023).cpp

Purpose: To use while loops to let customers pick what cookies they want.

Author: Michael Boutin

Date:10/15/2023

********************************************/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int choice = 0;                   
	double oreoCookies = 1.29, sugarCookies = 1.49, chocchipCookies = 1.79;

	int numCookies = 0;		
	double currentTotal = 0;		
	

	cout << "Welcome to my cookie shop!" << endl << endl;
	while (choice != 4)
	{
		cout << "Please select type of cookie or 4 to finish order\n"
			<< "1 - Oreo Cookies\n"
			<< "2 - Sugar Cookies\n"
			<< "3 - Chocolate Chip Cookies\n"
			<< "4 - to exit\n";

		cin >> choice;

		if (choice<=0||choice>4)
		{
			cout << "Please enter a valid choice. \n";
			continue;
		}
		if (choice!=4){
			cout << "Please enter a quantity of cookies. \n";
			cin >> numCookies;

		}
		switch (choice)
		{
		case 1:
			currentTotal += oreoCookies * numCookies;

			break;
		case 2:
			currentTotal += sugarCookies * numCookies;

			break;
		case 3:
			currentTotal += chocchipCookies * numCookies;

			break;
		}
		cout << "Your current total is $" <<setprecision(2)<<fixed<< currentTotal << endl;
	}

	return(0);
}
