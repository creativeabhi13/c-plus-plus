/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1


*/
/* #include <iostream>
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
        int val = row;
        while (col <= row)
        {
            cout << val << " ";
            val--;
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
    int num;
    cout << "Enter the number of the rows" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}