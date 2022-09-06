/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row

 * * * *
   * * *
     * *
       *

star=n-row+1
space=row-1

*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of the row" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {

        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }

        int col = 1;
        while (col <= num - row + 1)
        {

            cout << "*";

            col++;
        }
        cout << endl;
        row++;
    }
}