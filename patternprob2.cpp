/* print a hollow rectangle pattern

*****
*   *
*   *
*   *
*****
code:-1)for(int i=1; i<=row; i++)
       {
           for(int j=1; j<=col; j++)

           {
               if(i==1 || i==row)
               {
                   cout<<"*";
               }
              else if(j==1 || j==col)
              {
                  cout<<"*";
              }
             else{
                 cout<<" ";
             }  
           }
           cout<<endl;

       }
    }

2)
    for(int i=1; i<=row; i++)
       {
           for(int j=1; j<=col; j++)

           {
               if(i==1 || i==row || j==1 || j==col)
               {
                   cout<<"*";
               }
             
             else{
                 cout<<" ";
             }  
           }
           cout<<endl;

       }
    }


 */


#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the row and colummn"<<endl;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
       {
           for(int j=1; j<=col; j++)

           {
               if(i==1 || i==row)
               {
                   cout<<"*";
               }
              else if(j==1 || j==col)
              {
                  cout<<"*";
              }
             else{
                 cout<<" ";
             }  
           }
           cout<<endl;

       }
    }


}