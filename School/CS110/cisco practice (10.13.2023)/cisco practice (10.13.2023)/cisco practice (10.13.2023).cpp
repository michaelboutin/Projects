int main() {
#include <iostream>
	using namespace std;
	float a, b;

	
	cin >> a; //assume 3.0
	
	b = a / 2;
	
	if (b >= 1)    a += b;
	
	if (a > b)     b += a;
	
	cout << a + b;
	
	return(0);
}