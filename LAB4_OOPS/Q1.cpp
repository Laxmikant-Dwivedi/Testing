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

int main() {
    AreaOfRectangle object;
    object.get();
    cout<<"Area of Rectangle : "<<calculate(object);
}
 


