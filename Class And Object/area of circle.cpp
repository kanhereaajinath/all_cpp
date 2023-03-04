//area of circle using class and object
#include<iostream>
using namespace std;
class are
{

private:
    float r,a;
public:
    void setare()
    {

        cout<<"enter radius of circel"<<endl;
        cin>>r;

    }
    void showare()
    {

        a=3.14*r*r;
    cout<<"area of circle is"<<a<<endl;

    }
};
main()
{

    are ob;
    ob.setare();
    ob.showare();

}
