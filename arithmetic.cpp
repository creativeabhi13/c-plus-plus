// Operator                 Operation                                  Example
// +                Adds two operands                                 A+B = 15
// -          Subtracts right operand from left operand               B-A = 5
// *             Multiplies two operands                              A*B = 50
// /           Divides left operand by right operand                  B/A = 2
// %         Finds the remainder after integer division               B%A = 0
// ++                    Incrementer                                  A++ = 6
// --                    Decrementer                                  A-- = 4



// Arithmetic operators perform some arithmetic operation on one or two
// operands. Operators that operate on one operand are called unary
// arithmetic operators and operators that operate on two operands are
// called binary arithmetic operators.
// +,-,*,/,% are binary operators.
// ++, -- are unary operators.

#include<iostream>
using namespace std;
int main()
{
    
    int x,y;
  cout<<"enter two number"<< endl;
  cin>>x>>y;

  
  

  
       cout<<x+y <<endl;
     

      cout<< x-y<<endl;
   

    cout <<x*y<<endl;
   

   cout << x/y <<endl;
   
 cout << x%y <<endl;


    
    
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