/*
equal number star in rows and col
* * * *
* * * *
* * * *
* * * *


*/
/* #include <iostream>
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
} */
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows" << endl;
    cin >> rows;

    for (int pat = 1; pat <= rows; pat++)
    {

        for (int pat1 = 1; pat1 <= rows; pat1++)
        {
            cout << " * ";
        }
        cout << endl;
        }
}