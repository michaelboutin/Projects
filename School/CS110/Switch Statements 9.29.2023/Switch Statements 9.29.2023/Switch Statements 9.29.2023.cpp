#include <iostream>
using namespace std;

int main()
{
	float n1, n2;
	int selection;
	float solution;
	
	cout << "Enter First Number\n";
	cin >> n1;
	cout << "Select Operation \n1.+\n2.-\n3.*\n4./" << endl;
	cin >> selection;
	cout << "Enter Second Number\n";
	cin >> n2;

	switch (selection)
	{
	case 1:
		solution = n1 + n2;
		break;
	case 2:
		solution = n1 - n2;
		break;
	case 3:
		solution = n1 * n2;
		break;
	case 4:
		solution = n1 / n2;
		break;
	default:
		cout << "Invalid Input\n";
		return 1;
	}

	system("cls");
	cout << "Your answer is " << solution;

	return(0);
}
