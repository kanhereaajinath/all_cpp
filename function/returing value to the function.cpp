#include<iostream>
using namespace std;
add(int a ,int b)
{

    int c;
    c=a+b;
    return c;

}
sub(int a,int b)
{

    int c;
    c=a-b;
    return c;

}
 area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
main()
{

    int p;
    p=add(100,320);
    cout<<"addtion is"<<p<<endl;
    int q;
    q=sub(45,34);
    cout<<"substraction is "<<q<<endl;
    float r;
    r=area(45);
    cout<<"area is "<<r<<endl;

}
