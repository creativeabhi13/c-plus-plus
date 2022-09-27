#include <iostream>
using namespace std;
void swap(int a[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (target == (a[i] + a[i + 1]))
        {
            cout << "[" << i << "," << i + 1 << "]";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    swap(a, n, target);
}