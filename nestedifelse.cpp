#include<iostream>
using namespace std;
int main()
{
 int salary;
 cin>> salary;

 if(salary>50000)
 {
     cout<<"good income\n";

     if(salary>100000)
     {
         cout<<"trip to switzerland";
     }
     else{
         cout<<"shoppping";
     }
 }
 else if (salary>20000)
 {
     cout <<"bad income";
 }
 

 else{
     cout<<"average income";
 }

}