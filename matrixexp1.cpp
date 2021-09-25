// search matrix

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "matrix is :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                cout << "Element is found\n";
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element is not found\n";
    }
}