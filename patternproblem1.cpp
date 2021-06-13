/* Pattern Problems
The easiest way to understand the working of a nested loop is by solving pattern printing
problems.

Print a solid rectangle
  
*****
*****
*****
*****
***** */
#include<iostream>
using namespace std;
int main()
{
int row,colum;
cout<<"enter the row and column "<< endl;
cin>>row>>colum;

for(int i=1; i<=row; i++)
{
    for(int j=1; j<=colum; j++)
    {
    cout<<"*";
}
cout<<endl;
 }
}