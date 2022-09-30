#include<iostream>
 
using namespace std;

 
 
int main()
{
int arr[5][5],a=0,b=0,i,j,n_556;
cout<<"Enter size of matrix(max 5):";
cin>>n_556;
cout<<"Enter the matrix:\n";
for(i=0;i<n_556;++i)
for(j=0;j<n_556;++j)
cin>>arr[i][j];
for(i=0;i<n_556;++i)
for(j=0;j<n_556;++j)
if(j>i)
a+=arr[i][j];
else
if(i>j)
b+=arr[i][j];
cout<<"\nSum of elements above the diagonal:"<<a;
cout<<"\nSum of elements below the diagonal:"<<b;
 
return 0;
}