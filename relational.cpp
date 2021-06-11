// Operator                         Operation                                          Example
// ==                Gives true if two operands are equal                             A==B is not true
// !=                Gives true if two operands are not equal                         A!=B is true
// >                Gives true if left operand is more than right  operand            A>B is not true
// <            Gives true if left operand is less than right operand                   A<B is true
// >=         Gives true if left operand is more than right operand or equal to it     A>=B is not true
// <=             Gives true if left operand is more than right operand or equal to it  A<=B is true

// Relational operators define the relation between 2 entities.
// They give a boolean value as result i.e true or false.
// Suppose : A=5 and B=10
// //     We need to write a program which prints if a number is more than 10,
// // equal to 10 or less than 10. This could be done using relational operators
// // with if else statements.

#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;
if(n<10){
cout<<"Less than 10"<<endl;
}
else if(n==10){
cout<<"Equal to 10"<<endl;
}
else{
cout<<"More than 10"<<endl;
}
}
