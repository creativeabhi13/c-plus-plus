/*
number star in rows
row->4

but printing col->row
so try to print number of star equal to row
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

//1st triangle
space=row-1;
space--;

// 2nd traingle
col-row num
print col
col++

// 3rd traingle
int start=row-1
print start
start--;


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
        // space -1st triangle
        int space = num - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // 2nd triangle
        int col = 1;
        while (col <= row)
        {

            cout << col;
            col++;
        }

        // 3rd taingle

        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}