#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort_Zero_One_two(int arr[], int n)
{
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c1++;
        }

        else if (arr[i] == 1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    int i = 0;
    for (; i < c1; i++)
    {
        arr[i] = 0;
    }

    for (; i < c1 + c2; i++)
    {
        arr[i] = 1;
    }

    for (; i < c1 + c2 + c3; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort_Zero_One_two(a, n);
    printarray(a, n);
}