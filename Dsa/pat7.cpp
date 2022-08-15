/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
1
2 2
3 3 3
4 4 4 4


*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number \n";
    cin >> num;
    int row = 1;
    while (row <= num)
    {

        int col = 1;
        while (col <= row)
        {
            cout << " " << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}