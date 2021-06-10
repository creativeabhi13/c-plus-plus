/*
syntax 
switch (n)
{
case 1: // code to be executed if n == 1;
break;
case 2: // code to be executed if n == 2;
break;
default: // code to be executed if n doesn't match any of the above cases
}
*/
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter two number"<< endl;
  cin>>a>>b;

  char op;
  cout<<"enter the operator";
  cin>>op;

  switch(op)
  {
      case '+': cout<<a+b <<endl;
      break;

     case '-' : cout<< a-b<<endl;
     break; 

     case '*' : cout <<a*b<<endl;
     break;d

     case '/' : cout << a/b <<endl;
     break;

     default : cout <<"wrong input";
  }


}