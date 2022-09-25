#include <iostream>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (isprime(num))
    {
        cout << "it is a prime number" << endl;
    }
    else
    {
        cout << "it is not a prime numebr" << endl;
    }
}