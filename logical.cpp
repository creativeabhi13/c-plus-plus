/*]
The syntax for while loop is 
do {
 // body of loop;
}
while (condition);

the do while loop first enter to body then check the condition
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    do{
        cout <<n<<endl;
        cin>>n;
    } 
    while(n>0);
}