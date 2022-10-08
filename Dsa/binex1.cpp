/*

find the first and last occurance of the element in the sorted array
i/p->
// 2 test case
2
// 6 is the size of array and 2 is the key
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2

o/p->
-1 -1
 4 7

*/

/*

Binary  search
*/
#include <iostream>
using namespace std;

int firstoccurance(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        // go to right wala part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastoccurance(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        // go to right wala part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int n, key;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n];

    cout << "Enter the element in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key" << endl;
    cin >> key;

    cout << "First occurance of the "
         << " " << key << " is " << firstoccurance(a, n, key) << endl;
    cout << "Last occurance of the "
         << " " << key << " is " << lastoccurance(a, n, key) << endl;

    return 0;
}
