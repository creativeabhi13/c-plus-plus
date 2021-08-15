// practice question
/* Quick questions on function
sum of n natural number
 s=1+2+3+4.........+n
s=n(n+1)/2 */
/* #include <iostream>
using namespace std;
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
}
 */

// check the pythogoras triplet
#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a *a = b * b + c * c)
    {
        return true;
    }
    return false;
}

int 32_main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "pythagorous triplet\n"
             << endl;
    }
    else
    {
        cout << "not pythagorus triplet" << endl;
    }
}