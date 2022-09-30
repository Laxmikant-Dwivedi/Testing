//WAP to display fibonacci series upto n
#include <iostream>
using namespace std;

int main() {
    int nos, roll_556 = 0, troll_556 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> nos;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= nos; ++i) {
       
        if(i == 1) {
            cout << roll_556 << " ";
            continue;
        }
        if(i == 2) {
            cout << troll_556 << " ";
            continue;
        }
        nextTerm = roll_556 + troll_556;
       roll_556 = troll_556;
        troll_556 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}




