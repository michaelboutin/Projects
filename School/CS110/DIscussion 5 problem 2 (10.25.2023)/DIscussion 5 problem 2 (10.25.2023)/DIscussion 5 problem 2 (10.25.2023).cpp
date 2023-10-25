#include<iostream>
using namespace std;

int main()
{

	char sentence[100];
	int i = 0;
	cin >> sentence;

	while (sentence[i] != '\0')
	{
		cout << sentence[i] << endl;
		i++;
	}
	return 0;

}