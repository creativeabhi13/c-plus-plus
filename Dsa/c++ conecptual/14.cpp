/*
A program to find gcd and lcm of a number;
*/
#include <iostream>
using namespace std;
int main()
{
    int num, num1;
    cout << "Enter the number for lcm and gcd" << endl;
    cin >> num >> num1;
    int lcm = 1, gcd = 1;
    for (int i = 1; i < 10000; i++)
    {
        if ((num % i == 0) && (num1 % i == 0))
        {
            gcd = i;
        }
    }
    lcm = num * num1 / gcd;
    cout << "The gcd of the two number " << num << " and " << num1 << " is " << gcd << endl;
    cout << "The lcm of the two number " << num << " and " << num1 << " is " << lcm << endl;
}