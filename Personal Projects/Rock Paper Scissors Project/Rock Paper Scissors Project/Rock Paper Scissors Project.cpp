#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int Move=0, opMove;

	
	cout << "1. Rock" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissors" << endl;


	do {
	cout << "Choose your move:" << endl;
	cin >> Move;

	if (Move < 1 || Move > 3)
	
		cout << "This is an invalid move. Please choose between 1 and 3" << endl;
	
	} while (Move < 1 || Move>3);
	
	
	for (int i = 1; i < 2; i++)
	{
		opMove = rand()%3+1;
	}
	
	if (opMove == Move)
	{
		cout << "It was a tie!" << endl;
	}
	else if (opMove == 1 && Move == 3)
	{
		cout << "You lost to Rock!" << endl;
	}
	else if (opMove == 2 && Move == 1)
	{
		cout << "You lost to Paper!" << endl;
	}
	else if (opMove == 3 && Move == 2)
	{
		cout << "You lost to Scissors!" << endl;
	}
	else
	{
		cout << "You Won!" << endl;
	}


	
	
	return(0);
}
