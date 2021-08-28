// insertion sort- it is a technique in which we are going to sort a list of item in ascending or desceding order ...the sorted technique for this is to --
/* intially the first element is already sorted  
we have to insert an element from unsorted array to its current position in sorted array  */

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

    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}