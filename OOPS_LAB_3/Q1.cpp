#include<iostream>
using namespace std;
class triangle_556
{
    private :
    float base;
    float height;
    float area;
    
    public :
    int getdata()
    {
        cout<<"Enter The value Base ";
        cin>>base;
        cout<<"Enter value of Height "<<endl;
        cin>>height;
        area = (1.0/2.0)* base * height;
        return area;
    }
    void dispdata()
    {
        cout<<"The Area Of Triangle is : "<< area <<endl;
    }
};

int main()
{
    triangle_556 T;
    T.getdata();
    T.dispdata();  
    return 0;
}