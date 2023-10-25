#include <iostream>
using namespace std;

int main() {
	
	int j, input, sum = 0, nMax;
	
	cout << "Please enter how many numbers do you want to sum" << endl;
	
	cin >> nMax;
	
	for (j = 0; j < nMax; j++)
	
	{
		cout << "Enter a number" << endl;
		cin >> input;
		sum += input;
	}
	
	cout << "The Sum is "<< sum << endl;

	
	return(0);
}