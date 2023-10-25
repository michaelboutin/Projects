#include <iostream>
using namespace std;
int main() {
	char w[100];
	

	for (int i = 65; i < 97; i++) {
		w[i - 65] = i;
	}
	for (int i = 0; i < 32; i++)
		cout << w[i] << endl;




	return(0);
}
