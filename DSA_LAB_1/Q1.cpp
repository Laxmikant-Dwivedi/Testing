#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max_556, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max_556 = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max_556 < arr[i])
            max_556 = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max_556;
    cout << "Smallest element : " << min;
    return 0;
}