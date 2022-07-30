#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime For" << i << endl;
        }
        else
        {
            cout << "Prime For" << i << endl;
        }
        i = i + 1;
    }
}