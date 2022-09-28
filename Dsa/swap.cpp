/*
Swap alternate element in the array
1 2 3 4 5
2 1 4 3 5

1 2 3 4 5 6
2 1 4 3 6 5
*/

#include <iostream>
using namespace std;
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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

    swapalternate(a, n);
    swapalternate(a1, 7);
    swapalternate(a2, 10);

    printarray(a, n);
    printarray(a1, 7);
    printarray(a2, 10);
}
