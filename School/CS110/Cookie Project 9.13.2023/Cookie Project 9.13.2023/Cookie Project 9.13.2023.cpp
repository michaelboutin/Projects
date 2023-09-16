/*******************************************
Program: Cookie Project 9.13.2023.cpp
Purpose: To calculate the customers total based on the number of cookies they buy.
Author: Michael Boutin
Date: Sep 13, 2023
********************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double dTotal;
    int  nNumCookies;
	double dPrice = 1.39;
	cout << fixed << setprecision(2);
	cout << "How many cookies would you like?" "\n";
	cin >> nNumCookies;
	system ("cls"); 
	dTotal = nNumCookies * dPrice; 
	cout << "Your total is $" << dTotal << '\n';
	
	

	return 0;
}

