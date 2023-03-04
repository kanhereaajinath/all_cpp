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
};
main()
{

    int x=200;
    time t=x;
    t.show();

}
