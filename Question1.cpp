 // 1.WAP to input name, roll number and marks in 5 subjects for a student, and display it. 

#include <iostream>
using namespace std;
int main()
{
    string name;
    int roll;
    int marks[5];
    cout << "Enter Name: "; 
    cin >> name;
    cout << "Enter the roll number :" << endl;
    cin >> roll;
    cout<< "Enter the marks in five subjects: " << endl;
    for(int i=0;i<5;i++)
        cin >> marks[i];
    cout << "Details Entered: " <<  endl;
   cout << "Name : " << name << endl;
   cout<< "Roll Number " << roll << endl;
    for(int i=0;i<5;i++) 
        cout << "Marks " << i+1 << " : " << marks[i] << endl;
return 0;
}