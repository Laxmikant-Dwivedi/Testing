#include <iostream>
using namespace std;
void pattern(int a[], int n)
{
    int i,j,t=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout << a[j] << " ";
        cout << endl ;
        for (j=0;j<n-1;j++)
        {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
    
    return ;
}

int main()
{
    int arr[5] = {4,5,6,7,8};
    pattern(arr,5);
    return 0;
}
