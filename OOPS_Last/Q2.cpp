#include <iostream>
using namespace std;
 
int main()
{
    int n1_556 = 5, n2 = 10, max;
     
    max = (n1_556 > n2) ? n1_556 : n2;
    
    cout << "Largest number between "
         << n1_556 << " and " << n2
         << " is " << max << ".";
   
    return 0;
}