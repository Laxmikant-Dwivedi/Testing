#include<iostream>
using namespace std;
float area(float);
float area(double);
int main()
{
    float r;
    cout << "Enter the radius " <<endl;
    cin >> r;
    
    cout << "Area of circle is " << endl;
    float res= area(r);
    cout <<res << endl;
    double r1;
    cin>>r1;
    cout << "Volume of sphere is " << endl;
    float vol= area(r1);
    cout <<vol << endl;
}
float area(float r)
{
return (3.14*r*r);
}
float Volume(double r)
{
    return ((4/3)*(3.14)*r*r*r);
}