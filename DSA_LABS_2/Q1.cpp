#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n_56)
{
    if (n_56==0 || n_56==1)
        return n_56;
    int j = 0;
    for (int i=0; i < n_56-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n_56-1];
 
    return j;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n_56 = sizeof(arr) / sizeof(arr[0]);
    n_56 = removeDuplicates(arr, n_56);

    for (int i=0; i<n_56; i++)
        cout << arr[i] << " ";
 
    return 0;
}