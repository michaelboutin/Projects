#include <iostream>
using namespace std;

int main()
{
	cout << "What would you like to calculate?" << endl;
	cout << "1. Flight time" << endl << "2.
	double distance, speed, time;
	
	cout << "How many miles is your flight?" << endl;
	cin >> distance;
	
	cout << "What speed are you traveling? (MPH)" << endl;
	cin >> speed;

	time = distance / speed;

	cout << "It will take you " << time << " hours to make it to your destination." << endl;


	return 0;
}
