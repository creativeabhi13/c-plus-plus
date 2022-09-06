/*
number star in rows
row->3
col->3
but printing col->row
so try to print number of star equal to row
D
C D
B C D
A B C  D

ch='A'+n-row

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
        char ch = 'A' + num - row;
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