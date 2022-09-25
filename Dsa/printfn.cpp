#include <iostream>
using namespace std;
void prints(int num)
{
    for (int i = 0; i <= num; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    prints(num);
}