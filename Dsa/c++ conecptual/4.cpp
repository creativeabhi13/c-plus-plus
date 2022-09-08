
#include <iostream>
using namespace std;
int main()
{
    // take input and print

    int a;
    int b;
    int temp;

    cout << "Enter the number both number " << endl;
    cin >> a >> b;

    cout << "Number before swapping " << a << " " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "Number AFTER swapping " << a << " " << b << endl;
}
