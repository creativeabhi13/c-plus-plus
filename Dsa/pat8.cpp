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


*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int count = 1;
    int row = 1;

    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " " << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}