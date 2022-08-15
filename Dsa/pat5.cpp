/*
          j=i j=2 j=3
r1->i=1    1  2    3
r2->i=2    4  5    6
r3->i=3    7  8    9

take variable starting from 1 and just print it while increasing it

*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    int i = 1;
    int count = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << " " << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}