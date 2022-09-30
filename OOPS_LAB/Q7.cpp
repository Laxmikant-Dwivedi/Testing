#include<iostream>
#include<math.h>
using namespace std;

class coordinates{
    double x;
    double y;
    public:
    void addC(double x, double y){
        this->x = x;
        this->y = y;
    }
    double distance(coordinates z){
        double x2 = z.x;
        double y2 = z.y;
        double x1 = x;
        double y1 = y;
        double distance = pow((pow((x2-x1), 2.0) + pow((y2-y1), 2.0)), 0.5);
        return distance;
    }
};

int main()
{
    coordinates p[2];
    double tx, ty;
    for(int i = 0; i < 2; i++){
        cout<<"x: "; 
        cin>>tx;
        cout<<"y: ";
         cin>>ty;
        p[i].addC(tx, ty);
    }

    cout<<p[0].distance(p[1]);

    return 0;
};