// WAP to write details and marks of students

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll_556;
    float marks;
};

int main() 
{
    student s;
    cout << "Enter details of students: " << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll_556;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << " Information of student is : " << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll_556 << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}