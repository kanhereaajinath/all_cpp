#include<iostream>
using namespace std;
class A
{

private:
    int i;
public:
    A()
    {

        i=10;
        cout<<"in A"<<endl;

    }
    int geti()
    {
        return i;
    }
};
class B:public A
{

private:
    int j;
public:
    B()
    {

        j=20;
        cout<<"in B"<<endl;

    }
    void add()
    {

        cout<<geti()+j<<endl;

    }

};
main()
{

    B ob;
ob.add();

}
