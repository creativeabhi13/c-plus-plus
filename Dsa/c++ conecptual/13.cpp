
/*
Multiplication table
1* 1=1
1*2= 2
1*3=3
.....
.....
1*10=10
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int mul = 1;
    for (int i = 1; i <= 10; i++)
    {

        mul = num * i;
        cout << mul << endl;
    }
}