// Write a program to reverse the even index position and oddindexposition 
// for even element array and odd element array.
#include <iostream>
using namespace std;
 

void evenodd(int arr[], int n)
{
   int oddpos = 1;
    int evenInd = 0;
    while (true)
    {
        while (evenInd < n && arr[evenInd] % 2 == 0)
            evenInd += 2;
             
        while (oddpos < n && arr[oddpos] % 2 == 1)
            oddpos += 2;
             
        if (evenInd < n && oddpos < n)
            swap (arr[evenInd], arr[oddpos]);
             
        else
            break;
    }
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 

int main()
{
    int arr[] = { 3, 6, 12, 1, 5, 8 };
    int n =6;
 
    evenodd(arr, n);
 
    cout << "new Array: ";
    printArray(arr, n);
 
    return 0;
}





