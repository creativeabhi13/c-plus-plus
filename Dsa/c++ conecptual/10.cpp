/*
fibonacci series
0,1,1,2,3,5,8,13,21,34,.....
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    int num1 = 0, num2 = 1, fib = 0;
    cout << "The fibonacci series of a number is "
         << " ";
    while (fib <= num)
    {
        cout << " " << fib;
        num1 = num2;
        num2 = fib;
        fib = num1 + num2;
    }
}