/*
number star in rows
row->4
col->4
but printing col->row
so try to print number of star equal to row
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1


//1st triangle
val=1;
col=n-row+1
print
val++;

// 2nd traingle
star=1
star<(row-1)*2
print *
star++

// 3rd traingle
int start=num-row+1
start>=1
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
        // 1st triangle
        int col = 1;
        int val = 1;

        while (col <= num - row + 1)
        {

            cout << val << " ";
            val++;
            col++;
        }
        // space -2nd triangle triangle
        int star = 1;
        while (star <= (row - 1) * 2)
        {
            cout << "* ";
            star++;
        }

        // 3rd taingle

        int start = num - row + 1;
        while (start >= 1)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }
}