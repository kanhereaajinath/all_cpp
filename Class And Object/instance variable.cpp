#include<iostream>
using namespace std;
class test
{

private:
    int i;
public:
    void seti(int x)
    {

        i=x;

    }
    void show()
    {
        cout<<i<<endl;

    }
};
main()
{
    test t1;
    test t2;
    test t3;
    t1.seti(100);
    t2.seti(200);
    t3.seti(300);
    t1.show();
    t2.show();
    t3.show();

}
