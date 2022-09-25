#include <iostream>
using namespace std;
int fibo(int n)
{
    int num1 = 0, num2 = 1;
    int fib = 0;
    for (int i = 0; i < n; i++)
    {
        cout << fib << endl;
        num1 = num2;
        num2 = fib;
        fib = num1 + num2;
        }
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int ans = fibo(num);
    cout << "The fibonacci series are "
         << " " << endl;
}