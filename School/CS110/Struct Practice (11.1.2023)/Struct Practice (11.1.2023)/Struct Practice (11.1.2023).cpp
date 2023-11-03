#include <iostream>
#include <string>

using namespace std;

struct cookieorder
{
	string cookieType;
	int numCookies;
	double price;
	double total;
};

const int MAX = 3;
int main()
{
	
	cookieorder o[MAX];

	o[0].cookieType = "Oreo";
	o[1].cookieType = "Sugar";
	o[2].cookieType = "C C";

	o[0].price = 1.29;
	o[1].price = 1.49;
	o[2].price = 1.79;

	for (int i = 0; i < MAX; i++)
	{
		o[i].total = 0;
		o[i].numCookies = 0;
	}

	int choice = 0;


	while (choice != -1)
	{
		cout << " What cookies would you like to order? 0-Oreo 1-Sugar 2-CC" << endl;
		cin >> choice;

		cout << "How many " << o[choice].cookieType << " Would you like" << endl;
		cin >> o[choice].numCookies;

		o[choice].total = o[choice].numCookies * o[choice].price;

		cout << "Do you want to order cookies?  -1 to Finish" << endl;
		cin >> choice;
	}
	double grandtotal = 0;
	for (int i = 0; i < MAX; i++)
		grandtotal += o[i].total;

	for (int i = 0; i < MAX; i++)
	{
		cout << o[i].cookieType << endl;
		cout << "Number of cookies: " << o[i].numCookies << endl;
	}
	cout << "Please pay " << grandtotal << endl;
	/*cookieorder o;
	o.price = 1.29;
	o.total = 0;
	o.numCookies = 0;

	cout << "What type of cookie would you like?\n";
	getline(cin, o.cookieType);
	cout << "You entered " << o.cookieType << endl;

	cout << "How many cookies would you like?\n";
	cin >> o.numCookies;
	
	o.total= o.numCookies * o.price;
	cout << "Please pay $" <<o.total<<" Thank you!"<< endl;
	*/
	return(0);
}