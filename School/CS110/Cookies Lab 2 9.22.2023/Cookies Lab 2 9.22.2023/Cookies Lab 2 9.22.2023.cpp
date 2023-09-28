/*******************************************

Program: Cookies Lab 2 9.22.2023.cpp

Purpose: To give the customer a total depending on the cookie they chose.

Author: Michael Boutin

Date:9/22/2023

********************************************/

#include <iostream>
using namespace std;

int main()
{
	double oreoCookies, sugarCookies, chocchipCookies, total;
	int choice, amount;


	oreoCookies = 1.29;
	sugarCookies = 1.49;
	chocchipCookies = 1.79;
	
	cout << "What type of cookies would you like?\n 1- Oreos $1.29\n 2- Sugar Cookies $1.49\n 3- Chocolate Chip Cookies $1.79\n";
	cin >> choice;
	system("cls");
	
	if (choice == 1)
	{
		cout << "How many cookies would you like?\n";
		cin >> amount; 
		total = oreoCookies * amount;
		cout << "Your total is $" << total << endl;
	}
	else if (choice == 2)
	{
		cout << "How many cookies would you like?\n";
		cin >> amount;
		total = sugarCookies * amount;
		cout << "Your total is $" << total << endl;
	}
	else if (choice == 3)
	{
		cout << "How many cookies would you like?\n";
		cin >> amount;
		total = chocchipCookies * amount;
		cout << "Your total is $" << total << endl;
	}
	else
	{
		cout << "Error, Please select a cookie we offer.\n";
	}

	return(0);

}