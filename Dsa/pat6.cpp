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
#include <iostream>
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
}