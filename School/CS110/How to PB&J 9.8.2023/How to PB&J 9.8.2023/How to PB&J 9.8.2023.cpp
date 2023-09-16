/*******************************************
Program: How to PB&J 9.8.2023.cpp
Purpose: To show how to make a PB&J Sandwich.
Author: Michael Boutin
Date: Sep 10,2023
********************************************/

#include <iostream>
using namespace std;

int main()
{
	string Name; //This is used to create a string where the user will input their name.
	cout << "What is your name?" "\n";
	cin >> Name; //This is so that the user can input whatever they want into the string. eg(their name)
	
	system("cls"); //This is so the first printed line will clear and the cls will look cleaner.
	
	std::cout << "Hello " << Name; //From here down ↓ will print all the instructions.
	cout << ", This is how to Make A PB & J Sandwich" << "\n\n";
	std::cout << "1. Make sure you have your supplies." << '\n';
	std::cout << "  * Two slices of bread." << '\n';
	std::cout << "  * Peanut Butter." << '\n';
	std::cout << "  * Jelly." << '\n';
	std::cout << "  * 2 Knifes." << '\n';
	std::cout << "  * Plate." << "\n\n";
	std::cout << "2. Get the two slices";
	std::cout << " of bread and place them down onto the plate." << "\n\n";
	std::cout << "3. Get one of the knifes and dip it into the";
	std::cout << " peanut butter, then spread it onto one side, of one of the slices of bread." << endl << endl;
	cout << "4. Get the second knife and dip it into the jelly, then spread it onto one side, of the second slice of bread." << endl << endl;
	cout << "5. Finally, take the two slices of bread and put them together with the peanut butter and jelly touching eachother."<< "\n\n";
	cout << "You now have a Peanut Butter & Jelly Sandwich. Enjoy!"<< endl;

	return (0);
}
