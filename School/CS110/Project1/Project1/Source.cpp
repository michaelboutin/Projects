/*
Program:
Purpose:
Author:
Date:
*/

#include <iostream>;
using namespace std;


int main()
{
    char grade;

    cout << "Enter a letter grade" << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Well done" << endl;
        break;
    case 'C':
        cout << "Well done" << endl;
        break;
    case 'D':
        cout << "You pass" << endl;
        break;
    case 'F':
        cout << "Try again" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }
    return 0;
}