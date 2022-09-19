/*
check whether a year is leap year or not
4
100
400
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year" << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "The enter year is leap year " << endl;
    }
    else if (year % 100 == 0)
    {
        cout << "The enter year is not a  leap year " << endl;
    }
    else if (year % 4 == 0)
    {
        cout << "The enter year is leap year " << endl;
    }
    else
    {
        cout << "The enter year is not a  leap year " << endl;
    }
}