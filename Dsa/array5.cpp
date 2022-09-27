
/* sum of the element in the array */
#include <iostream>
using namespace std;
void sum(int arr[], int size)
{

    // sum of the element in the  array
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << endl;
    cout << "the sum of the array are " << sum << endl;
}
int main()
{
    int n;
    cout << "Enter the number of element of array " << endl;
    cin >> n;
    //  creating an array
    int a[n];
    cout << "Enter the element in the array one by one " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // calling the update function
    sum(a, n);
}