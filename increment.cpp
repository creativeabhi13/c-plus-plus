// pre increment -first increment then store into variale 
// a=++b  & a==b
// post increment-first store then increment 
// a=b++

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b;

    b=++a;  // pre increment 
    cout<<a<<endl;
    cout<<b<<endl;
 int c=5;
 int d;
 d=c++;    //post increment
    cout<<c<<endl;
    cout<<d<<endl;


}