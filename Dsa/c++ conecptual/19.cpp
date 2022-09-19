
/*
 prime or not
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num == 2)
    {
        cout << "The number is  a prime number" << endl;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << "The number is not a prime number" << endl;
                break;
            }
            else
            {
                cout << "The number is  a prime number" << endl;
                break;
            }
        }
    }
}
