/* fibonacci series



0,1,1,2,3,5,8,13,21.......

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int num1 = 0, num2 = 1, fib = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << " "
             << fib;
        num1 = num2;
        num2 = fib;
        fib = num1 + num2;
    }
}