#include<iostream>
using namespace std;
int main ()
{
    int arr[5];
    int  size, i, maxi, mini;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the elements of the array : ";
    for (i = 0; i <  size; i++)
        cin >> arr[i];
    maxi = arr[0];
    for (i = 0; i <  size; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
    }
    mini = arr[0];
    for (i = 0; i < size; i++)
    {
        if (mini > arr[i])
            mini = arr[i];
    }
    cout << "Largest element is : " << maxi << endl;
    cout << "Smallest element is : " << mini << endl;
    return 0;
}