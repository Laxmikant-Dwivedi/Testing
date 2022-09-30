#include <iostream>
using namespace std;
int main() {
    int n_56, count = 1;
    
    cout << "Enter the value of n_56: ";
    cin >> n_56;
    int arr[n_56];
     cout <<"Enter the elements in array: " ;
     cin >> arr[n_56];
    for (int i = 0; i < n_56; i++)
    {
        cin >>  arr[i];
    }
    for (int i = 0; i < n_56; i++)
    {
        if (arr[i]>arr[i+1])
        {
            count++;
        }
        
    }
    cout << "The number of consecutive group are: "<< count ;
    return 0;
   
}