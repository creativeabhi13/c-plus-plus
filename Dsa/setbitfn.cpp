/* we have to count the set bit in the number of the function

101
2 set bit

1011

 3 set bit
*/
#include <iostream>
using namespace std;
int setbits(int n)
{
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n & 1)
        {
            count++;
                }
        n >> 1;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    int ans = setbits(num);
    cout << "the set bits count are "
         << ans << endl;
}