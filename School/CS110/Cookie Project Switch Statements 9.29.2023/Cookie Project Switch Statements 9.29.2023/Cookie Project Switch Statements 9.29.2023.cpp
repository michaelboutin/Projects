/*******************************************

Program: Cookies Project Switch Statements 9.29.2023

Purpose: To give the customer a total depending on the cookie they chose.

Author: Michael Boutin

Date:9/29/2023

********************************************/

#include <iostream>
using namespace std;


int main()
{
	int selection;
	double oreoCookies = 1.29, sugarCookies = 1.49, chocchipCookies = 1.79, numofCookies, total;

	cout << "Select your cookie.\n 1. Oreo Cookies $1.29\n 2. Sugar Cookies $1.49\n 3. Chocolate Chip Cookies $1.79\n";
	cin >> selection;
	
	switch (selection)
	{	
	case 1:
		cout << "How many cookies do you want?\n";
		cin >> numofCookies;
		total = oreoCookies * numofCookies;
		break;
	case 2:
		cout << "How many cookies do you want?\n";
		cin >> numofCookies;
		total = sugarCookies * numofCookies;
		break;
	case 3:
		cout << "How many cookies do you want?\n";
		cin >> numofCookies;
		total = chocchipCookies * numofCookies;
		break;
	default:
		cout << "Please select a cookie we offer!\n";
		return 1;
	}
	
	cout << "Your total is $" << total;
	
	return(0);
}
