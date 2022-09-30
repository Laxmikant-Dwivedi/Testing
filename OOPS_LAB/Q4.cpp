// Find the real and imaginary part of a Complex number

#include<iostream>
using namespace std;
class complex
{
    public:
    int RealNumber, ComplexNumber;
    void input()
    {
        cout<<"Enter the real part of the number : "<<endl;
        cin>>RealNumber;
        cout<<"Enter the imaginary part of the number : "<<endl;
        cin>>ComplexNumber;
    }
    void output()
    {
        cout<<RealNumber<<"+"<<ComplexNumber << "i"<<endl;
    }
};
int main()
{
    complex arr[10];
    cout<<"Enter 2 complex numbers : "<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Complex number : "<<(i+1)<<endl;
        arr[i].input();
    }
    cout<<"The 10 entered complex numbers are : "<<endl;
    for(int i=0;i<2;i++)
    {
        arr[i].output();
    }
    return 0;
}