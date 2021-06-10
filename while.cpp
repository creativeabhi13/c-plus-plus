/*
The syntax for while loop is 
while (condition) {
 // body of the loop
}
it will check first condition then enter to the loop

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        cout <<n<<endl;
        cin>>n;
    }
}