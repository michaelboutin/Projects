#include <iostream>
using namespace std;

int main() {
	int hourlyWage;
	int workHoursPerWeek;
	int annualSalary;
	int workWeeksPerYear;
	int monthlySalary;

	// TODO: Declare and initialize variable workWeeksPerYear, then replace the 50's below

	hourlyWage = 13.50;
	workHoursPerWeek = 20;

	annualSalary = hourlyWage * workHoursPerWeek * 52;
	cout << "Annual salary is: ";
	cout << annualSalary << endl;

	cout << "Monthly salary is: ";
	cout << (hourlyWage * workHoursPerWeek * 52) / 12 << endl;

	return 0;
}