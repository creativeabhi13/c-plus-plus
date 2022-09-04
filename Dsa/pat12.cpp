/*
number star in rows
row->3
col->3
but printing col->row
so try to print number of star equal to row

A B C
A B C
A B C


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
        while (col <= num)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}