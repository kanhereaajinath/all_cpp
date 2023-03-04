#include<iostream>
using namespace std;
class test
{

private:
    int i,j;
public:
    void show()
    {

        cout<<i<<" "<<j<<endl;

    }
    test()
    {

        i=10;
        j=20;
        cout<<"constructor called"<<endl;

    }
};
main()
{

    test t1;
    test t2;
    test t3;
    t1.show();
    t2.show();
    t3.show();

}
