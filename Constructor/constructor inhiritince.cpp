#include<iostream>
using namespace std;
class A
{

public:
    A()
    {

        cout<<"in a"<<endl;

    }
};
class B: public A
{


public:
B()
{

    cout<<"in B"<<endl;

}
};
main()
{

    B ob;
}
