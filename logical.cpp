// Logical operators are used to connect multiple expressions or conditions
// together.
// We have 3 basic logical operators.
// Suppose : A=0 and B=1

//   Operator                 Operation                                                          Example

//   &&          AND operator. Gives true if both operands are non-zero                        (A && B) is false
//   ||          OR operator. Gives true if atleast one of the two operands are non-zero       (A || B) is true
//   !            NOT operator. Reverse the logical state of operand                           !A is true
// .    
//   T && T = T                     T || T = T
//   T && F = F                     T || F = T
//   F && T = F                     F || T = T
//   F && F = F                     F || F = F  

// If we need to check whether a number is divisible by both 2 and 3, we will
// use AND operator
// (num%2==0) && num(num%3==0)
// If this expression gives true value then that means that num is divisible by
// both 2 and 3.
// (num%2==0) || (num%3==0)
// If this expression gives true value then that means that num is divisible by
// 2 or 3 or both.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number\n";
    cin>>n;

if (n%2 == 0 && n%3 == 0 ){

   cout<<"divisible by both"<<endl;
}

else if (n%2 == 0){

cout<<"divisible by only 2"<<endl;
}

else if (n%3 == 0){

cout<<"divisible by only 3"<<endl;
}

else
{
    
cout<<"divisible by none"<<endl;
}
}