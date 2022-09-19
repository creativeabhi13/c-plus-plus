/*
sum of n natural number
1 2 3 4 5
sum=15
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the  number" << endl;
    cin >> num;
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += i;
    }
    cout << sum;
}