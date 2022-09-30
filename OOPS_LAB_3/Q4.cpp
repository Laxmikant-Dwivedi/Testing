
#include<iostream>
using namespace std;

class Time
{
	int hour,min,sec;
public:
	void input()
	{
		cout << "Enter hour , minute and second" << endl;
        cin >> hour >> min >> sec;
	}

	void output()
	{
		cout << "Hour: " << hour << "Minute: " << min << "Second: " << sec;
 	}

	operator float()
	{
		float m;
		m = hour*60 + min + sec/60.0;
		return m;
	}
};

int main()
{
	Time output;
	output.input();

	float totmin;
	totmin = output;
	cout<<"Tot Min = "<<totmin << endl;;
	return 0;
}