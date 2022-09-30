#include<iostream>
using namespace std;
struct unit
{
    int km;
    float  meter;
}
d1, d2, sum;
int main()
{
    cout << "Enter D1 in km and metre : ";
    cin >> d1.km;
    cin >>  d1.meter;
   
   cout << "Enter D2 in km and metre : ";
    cin >> d2.km;
    cin >>  d2.meter;
    
    sum.km = d1.km + d2.km;
    sum.meter = d1.meter + d2.meter;
    while(sum.meter >=1000)
    {
        sum.meter = sum.meter-1000;
        sum.km++;
    } 
    cout << "Sum of the distances is " << " "<< sum.km << "KM " <<  "and" << " " << sum.meter<< "Metre" << endl; 
    return 0;
}
