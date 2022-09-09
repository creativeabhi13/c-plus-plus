
/* Sum of n natural number
    n
if n=5
0+1+2+3+4+5
15

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << endl;
}