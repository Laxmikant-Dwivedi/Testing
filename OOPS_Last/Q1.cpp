#include <iostream>
using namespace std;
int main()
{
    char fname_556[10],mname[10],lname[10];
    cout << "Enter the first name, middle name & last name";
    cin >> fname_556 >> mname>> lname ;
    cout << "Abbreviated form of name is " << endl;
    cout << fname_556[0] << "." <<" " << mname[0] << "." <<" " << lname << endl; 
    return 0;
}
