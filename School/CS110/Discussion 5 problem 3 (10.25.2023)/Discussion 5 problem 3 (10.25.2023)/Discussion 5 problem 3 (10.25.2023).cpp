#include <iostream>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));

	int i, num;
	double arr[100];
	
	for (i = 0; i <= 6; i++) {
		num = rand() % 1000;
		arr[i] = static_cast<double>(num) / 10.0;
		cout << arr[i] << '\n';
	}
	return 0;
}
