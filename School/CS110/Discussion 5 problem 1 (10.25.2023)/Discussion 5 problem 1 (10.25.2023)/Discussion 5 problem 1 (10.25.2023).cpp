#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const int SIZE = 10;
const int MAX = 10;

int main()
{
	int a[SIZE];
	int i,j, temp;

	srand(time(NULL));
		
	for (i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << endl;

		for (i = 0; i < MAX - 1; j++)

			if (a[j] < a[i])

			{
				temp = a[i];

				a[i] = a[j];

				a[j] = temp;
			}
	}
	cout << "sorted" << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << a[i] << endl;
	}
			
		


	return 0;
}
