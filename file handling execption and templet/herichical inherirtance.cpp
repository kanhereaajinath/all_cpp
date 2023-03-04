#include<iostream>
using namespace std;
class A
{
public:

    int x,y;

    void getdata()
    {
       cout<<"eneter two number"<<endl;
       cin>>x>>y;
    }

};
class B:public A
{

public:
    void product()
    {

        cout<<"product is ="<<x*y<<endl;

    }
};
class c:public A
{

public:
    void sum()
    {

        cout<<"sum is ="<<x+y<<endl;

    }


};
main()
{

    B ob;
    c ob1;
    ob.getdata();
    ob.product();
    ob1.getdata();
    ob1.sum();

}
