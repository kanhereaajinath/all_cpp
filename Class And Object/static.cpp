#include<iostream>
using namespace std;
class test
{

private:
    int  i;
    static int j;
public:

    void seti(int x)
    {

        i=x;
        j++;

    }
    void show()
    {

        cout<<j<<i<<" "<<endl;

    }
};
int test::j;
main()
{

    test t1;
    test t2;
    test t3;
    t1.seti(199);
    t2.seti(200);
    t3.seti(399);
    t1.show();
    t2.show();
    t3.show();
}
