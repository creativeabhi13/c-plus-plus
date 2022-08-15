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

        while (col <= row)
        {
            cout << " " << row << " ";

            col++;
        }
        cout << endl;
        row++;
    }
}