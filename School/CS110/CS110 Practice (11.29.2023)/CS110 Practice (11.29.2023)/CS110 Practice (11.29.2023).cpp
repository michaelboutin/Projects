#include<iostream>

using namespace std;

void fun(int a);
void fun1(int* b);
void fun2(int& b); 
void swap(int &a, int &b);

int main()
{
	int x = 5,y=12;

	
	cout << "main x=" << x<<","<<y<< endl;
	swap(x,y);
	cout << "main x=" << x << "," << y << endl;
	
	return(0);

}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

}
void fun2(int& b)
{
	cout << "fun x=" << b << endl;
	b++;
	cout << "fun x=" << b << endl;
}
void fun1(int* b)
{
	cout << "fun x=" << *b << endl;
	(*b)++;
	cout << "fun x=" << *b << endl;

}
void fun(int b)
{
	cout << "fun x=" << b << endl;
	b++;
	cout << "fun x=" << b << endl;

}
/*Step 1 by value
int x = 5;
cout << "main x=" << x << endl;
fun(x);
cout << "main x=" << x << endl;
*/