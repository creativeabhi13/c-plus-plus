#include <iostream>
using namespace std;
int main()
{
    // take input and print

    int a;
    char b;
    cout << "Enter the number " << endl;
    cin >> a >> b;
    cout << a << " " << b << endl;

    // Addd two number

    int a1, a2;
    cout << "Enter the two number " << endl;
    cin >> a1 >> a2;
    cout << "Sum of a1+a2 is "
         << " " << a1 + a2 << endl;

    // print q and r

    float q = a / b;
    int r = a % b;
    cout << "quotient and remainder are "
         << " " << q << " " << r << endl;
}
