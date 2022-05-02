#include <iostream>
using namespace std;
int main()
{

    int a[] = {1, 6, 3, 4, 5}; // array initialization
    int *ptr;                  // pointer declaration
    ptr = a;                   // assigning base address of array to the pointer ptr
    ptr = ptr + 1;             // incrementing the value of pointer
    std::cout << "value of second element of an array : " << *ptr << std::endl;
    return 0;
}