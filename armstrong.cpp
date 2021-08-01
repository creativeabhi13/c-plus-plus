// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int original = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit, 3);
        n = n / 10;
    }
    if (original == sum)
    {
        cout << "it is armstrong number" << endl;
    }
    else
    {
        cout << "it is not armstrong number" << endl;
    }
}