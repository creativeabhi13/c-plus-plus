// linear serching is the searching techinque in which we are searching key element from a large amount of  data linearly....

// time complexity is o(n)

#include <iostream>
using namespace std;

int Linearseach(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {

            return i;
        }
    }
    return -1;
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

    int key;
    cin >> key;
    cout << Linearseach(a, n, key);
}
