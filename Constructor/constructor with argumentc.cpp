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
    test (int x, int y)
    {

        i=x;
        j=y;
        cout<<"constructor with argument !!!"<<endl;

    }
    test()
    {

        i=10;
        j=20;
        cout<<"constructor without argument !!!"<<endl;

    }
};
main()
{

    test t1;
    test t2(34,50);
    t1.show();
    t2.show();

}
