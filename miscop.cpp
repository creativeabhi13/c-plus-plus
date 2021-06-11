/* Operator                                         Operation                                   Example

sizeof()                       Returns the size of variable                      If a is integer then sizeof(a) will return 4

Condition ? X:Y           Conditional operator. If condition is true,
                        then returns value of X or else value of Y                A+=B means A = A+B

Cast                   Casting operators convert one data type to another.          int(4.350) would return 4

Comma (,)            Comma operator causes a sequence ofoperations to be performed. The value of the entire comma expression is the value of
               the last expression of the comma-separated list.


Category                                  Operator                                  Associativity

Postfix                                 () [] -> . ++ - -                               Left to right
Unary                                     + - ! ~ ++ - -(type)* &                       sizeof Right to left
Multiplicative                            * / %                                         Left to right
Additive                                  + -                                           Left to right
Shift                                     << >>                                         Left to right
Relational                              < <= > >=                                       Left to right
Equality                                  == !=                                         Left to right
Bitwise                                  AND &                                          Left to right
Bitwise                                  XOR ^                                          Left to right
Bitwise                                  OR |                                           Left to right
Logical                                 AND &&                                          Left to right
Logical                                 OR ||                                           Left to right
Conditional                             ?:                                              Right to left
Assignment                      = += -= *= /= %=>>= <<= &= ^= |=                        Right to left
Comma                                      ,                                            Left to right */


#include<iostream>
using namespace std;
int main(){

int a, b, max;

    cout<<"Enter a and b: "<<endl;
    cin >> a>>b;

    max = a > b ? a : b;

    cout<<"Largest of the two numbers = "<< max<<endl;

    cout <<"size of the  a is :" <<sizeof(a)<<endl; 

    
    
    cout <<"size of the max is :" <<sizeof(max)<<endl; 



    printf("Size of short = %lu\n", sizeof(short));
    printf("Size of int = %lu\n", sizeof(int));
    printf("Size of unsigned int = %lu\n", sizeof(unsigned int));
    printf("Size of char = %lu\n", sizeof(char));
    printf("Size of float = %lu\n", sizeof(float));
    printf("Size of double = %lu\n", sizeof(double));
    printf("Size of long double = %lu\n", sizeof(long double));



    int x, y, z, sum;
    sum = (x=3, y=4, z=5, x+y+z);
    cout<<"sum is :" <<sum;
}