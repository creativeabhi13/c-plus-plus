/*
 n=a+(n-1)*d
 where,
  a is first term
 n is the nth term
 d is the common difference
*/
#include <iostream>
using namespace std;
int ap(int a, int d, int n)
{
    return a + (n - 1) * d;
}
int main()
{
    int a, d, n;
    cout << "Enter the first term, Common difference, nth term " << endl;
    cin >> a >> d >> n;
    int ans = ap(a, d, n);
    cout << "the nth term is " << ans << endl;
}