/*Write a program to print all prime numbers in a given range


output :-
enter a numebr a and b
1
20
2 is a prime number 
3 is a prime number
5 is a prime number
7 is a prime number
11 is a prime number
13 is a prime number
17 is a prime number
19 is a prime number
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
  
    cout<<"enter a numebr a and b"<<endl;

    cin>>a>>b;

  int i;

  for(int num=a; num<b; num++){

    for( i=2; i<num; i++)
    {
        if(num%i==0)
        {
           break;
        }
        
    }
        if(i==num)
        {
            cout <<num<<" is a prime number "<<endl;
        }

  }
        return 0;
}