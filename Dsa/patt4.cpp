/*
          j=i j=2 j=3
r1->i=1    3  2    1
r2->i=2    3  2    1
r3->i=3    3  2    1

j=1->n-j+1->3-1+1
j=2->n-j+1->3-2+1
j=3->n-j+1->3-3+1

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
            cout << rows - pat1 + 1;
            pat1 += 1;
        }
        cout << endl;
        pat += 1;
    }
}