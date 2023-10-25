#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main() {
	
	srand(time(0));
	
	int n = 14, sum = 0;
	
	for (int i = 1; i < 3; i++) 
	{
		int randNum = rand() % (n - 1) + 2;
		cout << randNum << "" << endl << endl;
		sum += randNum;
	}

	
	cout <<"The total of your cards is " << sum << endl;


	return 0;
}