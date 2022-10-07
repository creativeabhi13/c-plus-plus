/*

Linear search
o(n)
*/
#include <iostream>
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return 1;
    }
    return 0;
}
using namespace std;
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
    cout << "Enter the key element" << endl;
    int key;
    cin >> key;

    bool found = search(a, n, key);

    if (found == key)

        cout << key << " is present in the array" << endl;

    else

        cout << key << " is not present in the array" << endl;
}