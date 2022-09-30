#include<iostream>
using namespace std;
void sorting(int arr[], int n)
{
for(int i = 0; i< n ; i++)
{
 int minIndex = i;

   
for(int j = i+1; j< n ; j++)
{
    if(arr[j] < arr[minIndex])
    minIndex = j;
}  
swap(arr[ minIndex] , arr[i]);
}
}
void printArray(int arr[] ,int size) {
    for(int i = 0 ; i< size ; i++)
    {
    cout<< arr[i] << " " << endl;
}
}
int main()
{
int arr[5]= {2,4,6,1,7};
sorting(arr,5);
cout << "Sorted array" << endl;

printArray(arr,5);
return 0;

}