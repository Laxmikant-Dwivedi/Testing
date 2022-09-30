//WAP to Display 

// A
// A B
// A B C
// A B C …..

#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n_556;
  cin >> n_556;
 
  for(i=1;i<=n_556;i++)
     {
         for(j=0;j<=i;j++)
         {
            char ch = 'A' + j;
             cout<< ch;
         }
 
         cout<<endl;
     }
 
  return 0;
}












