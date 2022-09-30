#include<iostream>
using namespace std;
int main()
{
    int amt, note20, note50, note100, note500;
     note20= note50=note100= note500=0;
    cout << "Enter the amount " ;
    cin >> amt ;
    if(amt >= 500)
    {
        note500 = amt/500;
        amt =amt - note500 * 500;
    }
    if(amt >= 100)
    {
        note100 = amt/100;
        amt =amt- note100 * 100;
    }
    if(amt >= 50)
    {
        note50 = amt/50;
        amt = amt- note50 * 50;
    }
    if(amt>=20)
    {
        note20 = amt/20;
        amt =amt- note20 * 20;
    }
    cout << "Total number of notes" <<endl;
    cout << "500 = " << note500 <<endl;
    cout << "100 = " << note100 <<endl;
    cout << "50 = " << note50 <<endl;
    cout << "20 = " << note20 <<endl;
    return 0;
}