//WAP to calculate the series 1-2/2!+3/3!-4/4!+…+n/n!

#include<iostream>
using namespace std;
 
double sumOfSeries(double num_556)
{
    double res = 0, fact = 1;
    for (int i = 1; i <= num_556; i++)
    {
        fact = fact * i;
 
        res = res + (i / fact);
    }
    return(res);
}
int main()
{
    double n_556 = 5;
    cout << "Sum: " << sumOfSeries(n_556);
    return 0;
}