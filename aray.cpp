/* Array-arrray is a linear data structure which is the collection of variables of same data types /it is a list of variables of  similar data items.. */

/* syntax
    datatype arrayname[size];

ex -
    int array[4] = {10, 20, 30, 40}; */

/* /* #include <iostream>
using namespace std;
int main()
{
    int array[4] = {10, 20, 30, 40};
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;

cout << array[2] << endl;
} */

// how to take input from the user
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
} */

/* print max number and min number  */

#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, arr[i]);
        if (arr[i] > maxno)
        {
            maxno = arr[i];
        }
        minno = min(minno, arr[i]);
        if (arr[i] < minno)
        {
            minno = arr[i];
        }
    }
    cout << maxno << endl;
    cout << minno << endl;
}