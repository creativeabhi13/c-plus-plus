/*

Binary  search
*/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // suppose the start is 2^31-1 +@^31-1/2->it will be more so that's the reason we are using this technique to
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
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

    int Index = binarySearch(a, n, key);

    cout << " Index of  is " << Index << endl;

    return 0;
}
