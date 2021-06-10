/*continue statement  is used to skip next iteration of the loop
*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}