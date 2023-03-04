#include<iostream>
using namespace std;
class time
{
private:
    int hour;
    int min;
public:
    void show()
    {

        cout<<hour<<" "<<min<<endl;

    }
    time (int t)
    {

        hour=t/60;
        min=t%60;

    }
    operator int()
    {
        int m;
        m=hour*60+min;
        cout<<"operator called"<<endl;
        return m;

    }
};
main()
{

    int x=100;
    time t1=x;
    t1.show();
    int y;
    y=t1;
    cout<<y<<endl;

}

