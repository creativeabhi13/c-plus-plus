/* check a number is prime using for loop
num=7
7 is divisible by 1 and 7
so for loop goes from 2 to 6 if it is divisivle by the number in between 2 and 6 not a prime otherwise prime

break statement
it will terminate the loop /exit from the loop

 */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " "
                 << "is not a prime number" << endl;
            break;
        }
        else
        {
            cout << num << " "
                 << "is  a prime number" << endl;
            break;
        }
    }
}