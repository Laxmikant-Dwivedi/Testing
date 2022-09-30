 
#include<iostream>
using namespace std;
void swap1 (int *x,int *y)  // call by address
{
    int swap = *x;
    *x=*y;
    *y=swap;
}
void swap2(int x,int y)   // pass by value
{
    int temp=x;
    x=y;
    y=temp;
}
void swap3(int &x,int &y)        // reference
{
int temp=x;
x=y;
y=temp;
cout << "Value of x: " << x << endl;
cout << "Value of y: "<< y << endl;
}
int main()
{
    int x=90,y=60;
    swap1(&x,&y);  // call by address
    cout << "Value of x: " << x << endl;
    cout << "Value of y: "<< y << endl;
        swap2(x,y);  // value passed
    cout << "Value of x: " << x << endl;
    cout << "Value of y: "<< y << endl;
    swap3(x,y);  // reference
    
return 0;
}