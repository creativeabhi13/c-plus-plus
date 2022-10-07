/*

Binary  search
*/
#include <iostream>
using namespace std;
int binsearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + mid) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right side of the array
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of element in the array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key element" << endl;
    int key;
    cin >> key;
    cout << "key is at index" << endl;

    int s = binsearch(a, n, key);
    cout << " " << s << endl;
}