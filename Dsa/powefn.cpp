#include <iostream>
using namespace std;

int powers(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int base, pow;
    cout << "Enter the base and power " << endl;
    cin >> base >> pow;
    int power = powers(base, pow);
    cout << "The power of  " << base << "^" << pow
         << " "
         << " is " << power << endl;
}