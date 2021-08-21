// binary search is a searching technique in whichb we are trying to search key element from sorted list..
// it means we will devide a list into two helaves and then find mid element and then try to find element
// timecomplexity-O(log 2,n)

#include <iostream>
using namespace std;
int Binarysearch(int a[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    cout << Binarysearch(a, n, key);
}