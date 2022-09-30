#include<iostream>
using namespace std;
class greatest

{
private:
    int a,b;
    public:
        void input();
            void display();



};

void greatest ::input()

{
    cout<<"Enter 2 nos.:";
    cin>>a>>b;
}

void greatest::display()

{

    if(a>b)

    cout<<"greatest no.:"<<a;

    else

    cout<<"greatest no.:"<<b;

}

int main()

{

    greatest b;

    b.input();

    b.display();


}