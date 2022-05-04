#include <iostream>
using namespace std;
int main()
{

    int ptr1[5];
    int *ptr2[5];

    cout << "Enter the element:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr1[i];
    }

    for (int j = 0; j < 5; j++)
    {
        ptr2[j] = &ptr1[j];
    }

    cout << "the value are" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr2[i] << endl;
    }
}