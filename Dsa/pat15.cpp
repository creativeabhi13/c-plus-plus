/*
number star in rows
row->3
col->3
but printing col->row
so try to print number of star equal to row

A
B B
C C C

'A'+row-1




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
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}