/*

check whether the number is even or odd and zero

*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num != 0)
    {
        if (num % 2 == 0)
        {
            cout << "The number is even " << endl;
        }
        else
        {
            cout << "The number is odd" << endl;
        }
    }
    else
    {
        cout << "The number is neither even nor odd it is zero" << endl;
    }
}