/*
number star in rows
row->3
col->3
but printing col->row
so try to print number of star equal to row

A B C
B C D
C D E

i+j-1=1
add 'A'-1 both side
i+j-1+'A'-1='A'
i+j+'A'-2='A'

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
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}