
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double num1, num2, num3, num4, Answer, Average;
	
	cout << fixed << setprecision(3);
	cout << "Enter 4 Integers" << '\n';
	cin >> num1 >> num2 >> num3 >> num4;
	
	system("cls");

	Answer = num1 * num2 * num3 * num4;
	Average = (num1 + num2 + num3 + num4)/4;
	
	cout << "The sum is " << Answer << '\n';
	cout << "The Average is " << Average << '\n';
	
	return 0;
}
