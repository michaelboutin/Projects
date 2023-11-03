#include <iostream>
using namespace std;

int main(){
	
	char arr[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = '_';
			cout << arr[i][j];
		}
		cout << endl;
	}
	
	/*
	char arr[3][3] = { 'X','_','0','_','X','_','0','_','X' };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	*/
	return(0);
}