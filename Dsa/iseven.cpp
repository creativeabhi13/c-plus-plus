#include <iostream>
using namespace std;
bool iseven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (iseven(num))
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}