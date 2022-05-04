// print the minimum and max element in the array

#include <iostream>
using namespace std;
void printmin(int arr1[5]);
void printmax(int arr[5]);
int main()
{

    /*   int n;

      cout << "Enter the lenght of the array" << endl;
      cin >> n;
      int a[n];
      // array eleement
      cout << "Enter the element in the array\n"
           << endl;
      for (int i = 0; i <= n; i++)
      {
          cin >> a[i];
      }
      cout << " the element in the array\n"
           << endl;
      for (int i = 0; i <= n; i++)
      {
          cout << a[i];
      } */

    int a[5] = {40, 10, 45, 20, 34};
    int b[5] = {4, 1, 5, 2, 3};

    printmax(a);
    printmin(a);
    printmax(b);
    printmin(b);
}
void printmin(int arr1[5])
{
    int min = arr1[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr1[i])

            min = arr1[i];
    }
    cout << "The minimum element in the array is :" << min << endl;
}

void printmax(int arr[5])
{
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])

            max = arr[i];
    }
    cout << "The maximum element in the array is :" << max << endl;
}