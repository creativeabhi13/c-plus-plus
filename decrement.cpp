// pre derement -first decrement then store into variale 
// a=--b  & a==b
// post decrement-first store then decrement 
// a=b--

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b;

    b=--a;  // pre decrement 
    cout<<a<<endl;
    cout<<b<<endl;
 int c=5;
 int d;
 d=c--;    //post decrement
    cout<<c<<endl;
    cout<<d<<endl;


}