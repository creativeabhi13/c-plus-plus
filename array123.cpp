//given an array a[] size of n.for every i from 0 to n-1 the ouput is max(a[0],a[1],....a[n])
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

    for (int j = 0; j < n; j++)
    {
        int mx = -19999999;
        mx = max(mx, a[j]);
        cout << mx << endl;
    }
}