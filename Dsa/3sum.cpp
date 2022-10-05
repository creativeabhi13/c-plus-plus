#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "hi" << endl;
        for (j = i + 1; j < n; j++)
        {
            cout << "harsh" << endl;
            for (k = j + 1; k < n; k++)
            {
                cout << "soni" << endl;
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
}