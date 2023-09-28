#include <iostream>
using namespace std;


int main()
{
	int choice;

	cout << "What color do you like 1-red  2-blue\n";
	cin >> choice;

	if (choice == 1)
	{
		cout << "you like red\n";
		cout << "that is great\n";

	}
	else if (choice==2)
	{
		cout<<"You like blue\n";
	}
	else
	{
		cout << "invalid choice\n" << choice << endl;
	}
	
	/*
	int n1, n2, max = 0;

	cout << "Please enter two numbers:" "\n";
	cin >> n1 >> n2;

	if (n1 > n2)
	{
		cout << "First number is bigger " << n1 << endl;
		max = n1;
	}
	else if (n2>n1)
	{
		cout << "Second number is bigger " << n2 << endl;
		max = n2;
	}
	else
	{
		cout << "numbers are equal " << n1 << "," << n2 << endl;
		max = n1;
	}
	cout << "Maximum is " << max;
	*/

	return(0);
}