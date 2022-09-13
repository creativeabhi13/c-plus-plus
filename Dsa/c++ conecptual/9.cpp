/*

check greatest number among three number

*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is greatest than all" << endl;
    }
    else if (b > c && b > a)
    {
        cout << b << " is greatest than all" << endl;
    }
    else if (c > a && c > b)
    {
        cout << c << " is greatest than all" << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
}