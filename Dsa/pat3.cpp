/*
          j=1 j=2 j=3
r1->i=1    1  2    3
r2->i=2    1  2    3
r3->i=3    1  2    3


*/

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of the rows" << endl;
    cin >> rows;

    int pat = 1;
    while (pat <= rows)
    {
        int pat1 = 1;
        while (pat1 <= rows)
        {
            cout << pat1;
            pat1 += 1;
        }
        cout << endl;
        pat += 1;
    }
}