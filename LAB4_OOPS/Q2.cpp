#include<iostream>
using namespace std;
class AreaOfRectangle {
    int l;
    int b;
public:
    void get() {
        cout << "Enter the length of Rectangle : ";
        cin >> l;
        cout << "Enter the breadth of Rectangle : ";
        cin >> b;
    }
    friend float calculate(AreaOfRectangle ob);
};

float calculate(AreaOfRectangle ob) {
    return  ob.l * ob.b;
}
class AreaOfSquare {
    int l;
    
public:
    void getdata() {
        cout << "Enter the length of Square : ";
        cin >> l;
    
    }
    friend float calculate(AreaOfSquare ob);
};

float calculate(AreaOfSquare ob) {
    return  ob.l * ob.l;
}

int main() {
    AreaOfRectangle object;
    object.get();
    cout<<"Area of Rectangle : "<<calculate(object) << endl;
    AreaOfSquare object1;
    object1.getdata();
    cout<<"Area of Square: "<<calculate(object1);
}
 