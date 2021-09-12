// Two dimensional Array -the array contains m*n size of the array..
//   int a[m][n];
//   int a[m][n]={(1,2,3,4,5)(2,4,6,8,10)}
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << " ";
    }
}