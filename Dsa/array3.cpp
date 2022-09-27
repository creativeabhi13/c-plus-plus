/*
find the min and max element in the  array

*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
void printarray(int a[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int max(int arr[], int size)
{
    int max = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        // maxi=max(maxi,arr[i])
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size)
{
    int min = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout << "Enter the index of the array" << endl;
    cin >> n;
    int a[n];
    cout << "enter the element in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printarray(a, n);

    cout << "Maximum value in the array is " << max(a, n) << endl;
    cout << "Minimum value in the array is " << min(a, n) << endl;
}