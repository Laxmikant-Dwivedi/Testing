// WAP to print the numbers which are divisible by 7 and 13 within a range.
#include<iostream>
using namespace std;
int main ()
{
    for(int i=1; i<1000; i++)
    if(i%7==0 && i%13==0)
    {
       cout << i << " ";
    }
    return 0;
}

