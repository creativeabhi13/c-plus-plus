/*
scope of variable


*/
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    cout << a << endl;
    if (true)
    {
        int a = 5;
        cout << a << endl;
    }
}
