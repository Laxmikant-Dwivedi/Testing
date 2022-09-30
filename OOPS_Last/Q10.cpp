#include <iostream>
using namespace std;


int func(int arr[1000],int size,int count){
    int i, j = 0;
    cout << "Enter elements in array : ";
    for(i=0; i<size; i++)
    {
       cin >> arr[i] ;
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {

            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    } 
    cout << "Total number of duplicate elements found in array " <<  count << endl;
}
int main()
{
    int arr[1000];
    int size, count;
    

    cout << "Enter size of the array : " << endl;
   cin >> size;
    func(arr,size,count);

    

    return 0;
}