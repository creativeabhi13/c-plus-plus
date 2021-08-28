// selctrion sort is the techinque in which we try to arrange the data in ascending/descending order.
// find the minimum element in unsorted array and swap with element in the beginning

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

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[k] < a[j])
            {
                int temp = a[k];
                a[k] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}