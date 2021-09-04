// Subarray is a continuous part of the array
//: Number of subarrays of an array with n elements = n
// C2 + n = n * (n + 1) / 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur = 0;
        for (int j = i; j < n; j++)
        {
            cur += a[j];
            cout << a[j] << endl;
        }
    }
}