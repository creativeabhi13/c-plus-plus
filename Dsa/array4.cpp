/* scope of the array */
#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    cout << "Inside the function" << endl;
    // updating  an array
    arr[0] = 12;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    update(a, n);

    // printing all the array
    cout << "the element in tha array outside the function are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "  " << endl;
}