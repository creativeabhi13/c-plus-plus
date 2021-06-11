// unary operator-there will be one operand to perform a operation. 
// 
// binary-two operand to perform operartion.
// 

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int j=2;
    int k;
    //  1   2   1      2     3     4  

    k = i + j + i++ + j++ + ++i + ++j;
      
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<k<<endl;
  int a=10;
  int b=5;
  int c;
   // 10   5   10   5     8     3  

  c = a + b + a-- + b-- + --a + --b;    
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<c<<endl;

}