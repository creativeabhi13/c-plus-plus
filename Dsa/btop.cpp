/* 1.And --&
2.OR -- |
3.Not --~
4.Exor --^ both are same then 0 other wise 1

    x | y | x & y |
    -- -- -- --
    0 | 0 |  0    |
    -- -- -- -- --
    0 | 1 |  0    |
    -- -- -- -- --
    1 | 0 |   0   |
    -- -- -- -- --
    1 | 1 |   1   |
    -- -- -- -- --

    x | y | x | y |
    -- -- -- --
    0 | 0 |   0   |
    -- -- -- -- --
    0 | 1 |   1   |
    -- -- -- -- --
    1 | 0 |   1   |
    -- -- -- -- --
    1 | 1 |   1   |
    -- -- -- -- --

    x | y | x ^ y |
    -- -- -- --
    0 | 0 |   0   |
    -- -- -- -- --
    0 | 1 |   1   |
    -- -- -- -- --
    1 | 0 |   1   |
    -- -- -- -- --
    1 | 1 |   0   |
    -- -- -- -- --


    Right shift -shifting of digit of number right via adding 0 in left  it will become less ande devide of two
    5>>2-it means do right shift two times
    0 will be added at left side
    Left shift -shifting of digit of number left via adding 0 in right it will become multiple of 2
    5<<2- it means do left shift two times
    */

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the number " << endl;
    cin >> a >> b;
    cout << "a & b -> "
         << " " << (a & b) << endl;
    cout << "a | b -> "
         << " " << (a | b) << endl;
    cout << "a ^ b -> "
         << " " << (a ^ b) << endl;
    cout << "~a  -> "
         << " " << (~a) << endl;
    cout << "~b  -> "
         << " " << (~b) << endl;
    int a1, b1;
    cin >> a1 >> b1;
    cout << "left shift a << 2 = "
         << " " << (a1 << 2) << endl;
    cout << "left shift b << 3 = "
         << " " << (b1 << 3) << endl;

    cout << "Right shift a >> 2 = "
         << " " << (a1 >> 2) << endl;
    cout << "Right shift b >> 1 = "
         << " " << (b1 >> 1) << endl;
}