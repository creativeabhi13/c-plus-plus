/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
      1
    2 3
  4 5 6
7 8 9 10


space=row-1;
num=depend on row
val=1;
val++;

*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    int val = 1;
    cout << "Enter the number of the row" << endl;
    cin >> num;

    int row = 1;
    while (row <= num)
    {
        int space = num - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;

        while (col <= row)
        {

            cout << val;
            val++;

            col++;
        }
        cout << endl;
        row++;
    }
}