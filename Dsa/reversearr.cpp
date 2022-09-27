/*

reverse an array
*/
#include <iostream>
using namespace std;
void reversearray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    cout << "printing the array element" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "done " << endl;
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
    cout << endl;

    int a1[7] = {6, 1, 7, 2, 9, 3, 4};
    int a2[10] = {10, 23, 5, 1, 34, 12, 56, 36, 80, 54};

    printarray(a, n);
    printarray(a1, 7);
    printarray(a2, 10);

    reversearray(a, n);
    reversearray(a1, 7);
    reversearray(a2, 10);

    printarray(a, n);
    printarray(a1, 7);
    printarray(a2, 10);
}