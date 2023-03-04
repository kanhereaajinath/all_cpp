#include<iostream>
using namespace std;
class test
{

private:
    int i;
    static int j;
public:
    void seti(int x)
    {

        i=x;
        j++;
    }
    static void show()
    {

        cout<<j<<endl;

    }


};
int test::j;
main()
{

    test t1;
    test t2;
    test t3;
    t1.seti(100);
    t2.seti(200);
    t3.seti(300);
    test::show();
}
