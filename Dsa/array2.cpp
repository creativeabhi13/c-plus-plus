#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "done" << endl;
}

void printarr(char a[], int size)
{
    cout << "printing the  character array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "done" << endl;
}

int main()
{
    int one[15] = {10, 12, 13};
    printarray(one, 15);

    int two[8] = {10, 12};
    printarray(two, 8);

    int three[7] = {1};
    printarray(three, 7);

    int four[5] = {0};
    printarray(four, 5);

    char ch[8] = {'a', 'b', 'h', 'i', 's', 'h', 'e', 'k'};
    printarr(ch, 8);

    char ch1[10] = {'a', 'b'};
    printarr(ch1, 10);
}