#include <iostream>
using namespace std;

int main() {
	int inputYear;
	bool isLeapYear = false;
	cout << "Enter a Year to Determine if It is a Leap Year\n";
	cin >> inputYear;
	
	if (inputYear % 100 == 0)
	{

		if (inputYear % 400 == 0)
		{

			cout << inputYear << "--This is a leap year\n";
		}
		else
		{
			cout << inputYear << "--This is not a leap year\n";
		}
	}
	else
	{
		if (inputYear % 4 == 0) {

			cout << inputYear << "--This is a leap year\n";

		}
		else
		{
			cout << inputYear << "--This is not a leap year\n";

		}
		
	}
	/* Type your code here. */

	return 0;
}