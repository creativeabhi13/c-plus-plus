/*
equal number star in rows and col
* * * *
* * * *
* * * *
* * * *


*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    int pat = 1;
    while (pat <= rows)
    {
        int pat1 = 1;
        while (pat1 <= rows)
        {
            cout << " * ";
            pat1 += 1;
        }
        cout << endl;
        pat += 1;
    }
}