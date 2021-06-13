/* Print Half Pyramid Pattern using Stars
*
**
***
****
*****
******
int n;
cin>>n;
for(int i=1; i<=n; i++){

    for(int j=1; j<=i ; j++)
    {
        cout<<"*";
    }
    cout<<endl;

}


Print inverted Half Pyramid Pattern using Stars
******
*****
****
***
**
*

int n;
cin>>n;
for(int i=n; i>=1; i--){

    for(int j=1; j<=i ; j++)
    {
        cout<<"*";
    }
    cout<<endl;

} */

#include<iostream>
using namespace std;
int main()
{

int n;
cout <<"enter the number ";
cin>>n;
// for(int i=n; i>=1; i--){

//    for(int j=1; j<=i ; j++)

   for(int i=1; i<=n; i++){

    for(int j=1; j<=i ; j++)
    {
        cout<<"*";
    }
    cout<<endl;

}
}