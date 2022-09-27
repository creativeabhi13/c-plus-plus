/*
**
How to intialize,acess an array


 */
#include <iostream>
using namespace std;
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
    // printing all the array
    cout << "the element in tha array are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "  " << endl;
    // 2nd array
    int one[8] = {1, 2};
    int n1 = 8;

    for (int i = 0; i < n1; i++)
    {
        cout << one[i] << " ";
    }
    cout << "  " << endl;
    int two[8] = {1};
    int n2 = 8;

    for (int i = 0; i < n2; i++)
    {
        cout << two[i] << " ";
    }

    cout << "  " << endl;
    int three[8] = {0};
    int n3 = 8;

    for (int i = 0; i < n3; i++)
    {
        cout << three[i] << " ";
    }
}