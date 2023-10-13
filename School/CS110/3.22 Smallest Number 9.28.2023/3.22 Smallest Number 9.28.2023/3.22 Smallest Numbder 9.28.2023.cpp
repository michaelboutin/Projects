#include <iostream>
using namespace std;

int main() 
{
	double n1,n2,n3;
	
	cout << "Enter 3 Numbers\n";
	
	cin >> n1 >> n2 >> n3;
	
	if ((n1 == n2) && (n1 == n3) && (n2 == n3))
	{
		cout << "these numbers are all equal.\n";
	}
	else if ((n1 < n2) && (n1 < n3))
	{
		cout << n1 << " Is the smallest number\n";
	}
	else if ((n2 <= n1) && (n2 <= n3))
	{
		cout << n2 << " Is the smallest number\n";
	}
	else if ((n3 <= n1) && (n3 <= n2))
	{
		cout << n3 << " Is the smallest number\n";
	}
	return 0;
}