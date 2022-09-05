/*
number star in rows
row->3
col->3
but printing col->row
so try to print number of star equal to row

A
B C
D E F



*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of the row" << endl;
    cin >> num;
    char ch = 'A';
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {

            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}