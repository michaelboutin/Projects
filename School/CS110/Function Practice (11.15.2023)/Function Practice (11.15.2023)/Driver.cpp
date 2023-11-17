#include<iostream>
#include <iomanip>
using namespace std;

#include"Function Practice(11.15.2023).h"

int main() {
	double nRes = 0;

	nRes = sum(7, 2);
	cout << "Sum is " << nRes << endl;

	nRes = Diff(7, 2);
	cout << "Difference is " << nRes << endl;

	nRes = Multi(7, 2);
	cout << "Multiplication is " << nRes << endl;

	nRes = Div(7, 2);
	cout << "Division is " <<nRes << endl;

	return(0);
}