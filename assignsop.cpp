        // Operator                            Operation                                              Example

        // =             Assigns value of right operand to left operand                      A=B will put value of B in A
  
        // +=              Adds right operand to the left operand and assigns                A+=B means A = A+B
        //                      the result to left operand.

        // -=             Subtracts right operand from the left operand                       A-=B means A=A-B
        //              and assigns the result to left operand.

        // *=          Multiplies right operand with the left operand                         A*=B means A=A*B
        //             and assigns the result to left operand.

        // /=         Divides left operand with the right operand and                          A/=B means A=A/B
        //               assigns the result to left operand.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 7;

    // 7 is assigned to b
    b = 2;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    a =a+b;
    cout << "a = " << a << endl;

    a -= b;  // a = a -b
    cout << "a = " << a << endl;

    a = a-b;
    cout << "a = " << a << endl;

    a *= b;  // a = a * b
    cout << "a = " << a << endl;

    a =a* b;  
    cout << "a = " << a << endl;

    a/=b; // a = a / b
    cout << "a = " << a << endl;

    a=a/b; 
    cout << "a = " << a << endl;
    
}