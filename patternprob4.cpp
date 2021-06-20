/* print half pyramid after 180 degree rotation

         *
        **
       ***  
      ****
     *****
    ****** */
/* #include<iostream>
  using namespace std;
  int main()
  {
      int n;
      cout << "enter the number ";
      cin >> n;

      for(int i=1; i<=n; i++){
          for(int j=1; j<=n ; j++)
         {
             if(j <=n-i)
             {
                 cout<<" ";
             }
             else{
                 cout<<"*";
             }

         }
         cout<<endl;
     }
  }
 */

/* Print Half Pyramid using numbers

 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5  
 */
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i;
        }
        cout << endl;
    }
}
*/
/*
Print Half Pyramid using numbers
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
*/
/*
Print Inverted Half Pyramid using numbers
1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4 
1 2 3
1 2 
1 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}