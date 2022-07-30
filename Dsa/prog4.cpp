#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int i = 2;
    int sum = 0;

    while (i % 2 == 0 && i <= n)
    {

        {
            sum = sum + i;
            i = i + 2;
        }
    }
    cout << "The sum of the even  number is " << sum << endl;
}