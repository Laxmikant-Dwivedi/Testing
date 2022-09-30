#include <iostream>
using namespace std;

struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

void computeTimesum(struct TIME, struct TIME, struct TIME *);

int main()
{
    struct TIME t1, t2, sum;

    cout << "Enter start time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    computeTimesum(t1, t2, & sum);

    cout << endl << "TIME SUMATION: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " + " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " <<  sum.hours << ":" <<  sum.minutes << ":" <<  sum.seconds;
    return 0;
}
void computeTimesum(struct TIME t1, struct TIME t2, struct TIME * sum){
    

     sum->seconds = t1.seconds + t2.seconds;
     sum->minutes = t1.minutes+t2.minutes;
     sum->hours = t1.hours+t2.hours;
}
