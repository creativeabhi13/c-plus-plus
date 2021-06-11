// Bitwise Operators

// Bitwise operators are the operators that operate on bits and perform bit-
// by-bit operations.

// Suppose : A=5(0101) and B=6(0110)

//     Operator                           Operation                                                  Example
//     &           Binary AND. Copies a bit to the result if it exists in both operands.         0101  & 0110  =  0100
//     |           Binary OR. Copies a bit if it exists in either operand.                       0101  | 0110  =  0111
//     ^           Binary XOR. Copies the bit if it is set in one operand but not both.          0101  ^ 0110  =  0011
//     ~           Binary Ones Complement. Flips the bit.                                       ~0101 => 1010
//     <<          BiŶaƌLJ Lefƚ Shifƚ͘ The lefƚ ŽƉeƌaŶd͛Ɛ biƚƐ aƌe ŵŽǀed                          4->(0100) (4 << 1)=1000 = 8
//                 left by the number of places specified by the right operand.
//     >>          BiŶaƌLJ Righƚ Shifƚ OƉeƌaƚŽƌ͘ The lefƚ ŽƉeƌaŶd͛Ɛ biƚƐ aƌe                     4 >> 1 = 0010 = 2
//                  moved right by the number of places specified by the  right operand.
                                                                
// If shift operator is applied on a number N then,
// x N<<a will give a result N*2^a
// x N>>a will give a result N/2^a

// y = a * b        y = a + b         y = (~ab + a~b)    y = ~a
// a & b = y        a | b = y         a ^ b = y      ~1 = 0                                                    
// 0 & 0 = 0        0 | 0 = 0         0 ^ 0 = 0      ~0 = 1 
// 0 & 1 = 0        1 | 0 = 1         1 ^ 0 = 1
// 1 & 0 = 0        0 | 1 = 1         0 ^ 1 = 1        
// 1 & 1 = 1        1 | 1 = 1         1 ^ 1 = 0

#include<iostream>
using namespace std;
int main()
{
unsigned char a = 5, b = 9;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);


    int x = 12, y = 25;

    cout << "x = " << y << endl;

    cout << "y = " << y << endl;

    cout << "x & y = " << (x & y) << endl;
    
    cout << "x | y = " << (x | y) << endl;

    cout << "x ^ y = " << (x ^ y) << endl;

    cout << "~(" << x << ") = " << (~x) << endl;

    cout << "~(" << y << ") = " << (~y) << endl;


    int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right:" << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "\nShift Left:" << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

	return 0;
}
