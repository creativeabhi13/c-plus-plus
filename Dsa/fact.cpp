#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int num = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    return num / denom;
}
int main()
{
    int n, r;
    cout << "Enter the Number to find pnc " << endl;
    cin >> n >> r;
    int answer = ncr(n, r);
    cout << "The factorial is "
         << " " << answer << endl;
}