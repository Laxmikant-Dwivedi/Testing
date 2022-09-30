#include <iostream>
using namespace std;
int main(){
    int n_556 = 9;
    int arr[n_556] = {2,5,6,4,7,8,3,6,4};
    int temp;
    for(int i = 0; i<n_556/2; i++){
        temp = arr[i];
        arr[i] = arr[n_556-i-1];
        arr[n_556-i-1] = temp;
    }
    for(int i = 0; i < n_556; i++){
        cout << arr[i] << " ";
    }
}