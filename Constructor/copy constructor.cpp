#include<iostream>
using namespace std;
class test
{

private:
    int i,j;
public:
    void show()
    {

        cout<<i<<"  "<<j<<endl;

    }
    test(int x, int y)
    {

        i=x;
        j=y;
        cout<<"constructor with argument"<<endl;

    }
    test()
    {
        i=10;
        j=30;
        cout<<"constructor without argument "<<endl;

    }
    test (test &ob)
    {

    i=ob.i;
    j=ob.j;
    cout<<"copy constructor"<<endl;

    }


};

main()
{

    test t1;
    test t2(34,49);
    test t3(t2);
    t1.show();
    t2.show();
    t3.show();

}
