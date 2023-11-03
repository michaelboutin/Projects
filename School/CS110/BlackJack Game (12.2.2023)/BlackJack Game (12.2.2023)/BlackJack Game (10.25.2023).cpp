#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {


	srand(time(0));

	int n = 10, sum = 0, move, housesum = 0;
	

	for (int i = 1; i < 3; i++)
	{
		int randNum = rand() % (n - 1) + 2;
		cout << "Card "<<i<< ": " <<randNum<< endl << endl;
		sum += randNum;
	}
	for (int i = 1; i < 3; i++)
	{
		int houserandNum = rand() % (n - 1) + 2;
		housesum += houserandNum;
	}
	cout << "The total of your cards is " << sum << endl << endl;

	while (housesum <= 17) {
		int houserandNum = rand() % (n - 1) + 2;
		housesum += houserandNum;
	}
	if (housesum > 21)
	{
		cout << "You won!" << endl;
	}
	while (true)
	{
		cout << "What is your next move? (1) Hit , (2) Stand" << endl << endl;
		cin >> move;
		
		system("cls");
	
		if (move == 1) {
			int randNum = rand() % (n - 1) + 2;
			cout << "Your next card is " << randNum << "" << endl << endl;
			sum += randNum;

			cout << "The total of your cards is " << sum << endl;
		}
		if (sum > 21)
		{
			cout << "You have Busted!" << endl;
			break;
		}
		if (sum == 21)
		{
			while (sum > housesum && sum <= 21)
			{
				cout <<"You have won against the house!" << endl;
				break;
			}
			while (sum < housesum && sum < 21)
			{
				cout << "You lost to the house!" << endl;
			}
		}
		else if (move == 2)
		{
			while (sum > housesum && sum <= 21)
			{
				cout << "You have won against the house!" << endl;
				break;
			}
			while (sum < housesum && sum <= 21)
			{
				cout << "You lost to the house!" << endl;
				break;
			}
		}
	
	}

	return 0;
}


	

	
