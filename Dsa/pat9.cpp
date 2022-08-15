/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
1
2 3
3 4 5
4 5 6 7


*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    int row = 1;

    while (row <= num)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << " " << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
}