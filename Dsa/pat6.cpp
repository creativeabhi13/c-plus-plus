/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
*
* *
* * *
* * * *


*/
/* #include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;

    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " "
                 << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
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

        for (int pat1 = 1; pat1 <= pat; pat1++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}