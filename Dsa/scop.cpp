/*
scope of variable


*/
#include <iostream>
using namespace std;
int main()
{
    // a is access in that block
    int a = 3;
    cout << a << endl;

    if (true)
    {
        // a is only access in this block
        int a = 5;
        cout << a << endl;
        // we cannot access this block element to other block
    }
    // a is in diff scope
    cout << a << endl;
    // you cannot redifine the variable with same in the same scope
}
