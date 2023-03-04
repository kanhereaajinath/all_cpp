#include<iostream>
using namespace std;
class test
{

private:
    int i,j;
public:
    void setij(int x,int y)
    {

        i=x;
        j=y;

    }
    void show()
    {

        cout<<i+j<<endl;

    }
};
main()
{

    test t1;
    test t2;
    t1.setij(100, 200);
    t2.setij(200, 300);
    t1.show();
    t2.show();
}
