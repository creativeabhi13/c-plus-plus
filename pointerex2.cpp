#include <iostream>
using namespace std;
int main()
{

    int *ptr;
    int marks[10];
    cout << "enter the array element in the arrya:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> marks[i];
    }

    ptr = marks;
    cout << "The value of *ptr is:" << *ptr << endl;
    cout << "the value of *marks is " << *marks << endl;
}