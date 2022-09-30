#include <iostream> 
using namespace std; 
class employee 
{
 private:
 
 int id; 
 char name[20]; 
 int age; 
 int basicsal; 
 float grosssal; 
 public:
 
 void record() 
 { 
 int i; 
 cout<<"Enter the Name\n"; 
 cin>>name; 
 cout<<"enter the id\n"; 
 cin>>id; 
 cout<<"now enter the age \n"; 
 cin>>age; 
 cout<<"enter the basic salary\n"; 
 cin>>basicsal; 
 grosssal=basicsal+(0.75*basicsal)+(0.25*basicsal); 
 
 } 
 void display() 
 { 
 cout<<"Name- "<<name<<"\t"; 
 cout<<",id- "<<id<<"\t"; 
 cout<<",Age- "<<age<<"\t"; 
 cout<<",Basic salary- "<<basicsal<<"\t"; 
 cout<<",Gross salary- "<<grosssal<<endl; 
 
 } 
}; 
int main() 
{ 
 int no; 
 cout<<"Enter the number of employees "; 
 cin>>no; 
 employee emp[no]; 
 for(int i=0;i<no;i++) 
 { 
 emp[i].record(); 
 } 
 for(int i=0;i<no;i++) 
 { 
 emp[i].display(); 
 } 
 return 0; 
}