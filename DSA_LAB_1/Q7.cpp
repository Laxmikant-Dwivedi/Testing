#include <iostream>
using namespace std;
 
void rearrangeEvenAndOdd(int arr[], int n_556)
{
   
    int j = -1;

    for (int i = 0; i < n_556; i++) {
 
        if (arr[i] % 2 == 0) {
    
            j++;
    
            swap(arr[i], arr[j]);
        }
    }
}
 
int main()
{
    int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
    rearrangeEvenAndOdd(arr, 8);
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
}