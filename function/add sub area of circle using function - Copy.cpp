//addtion subsrtaction area of circle using function
#include<iostream>
using namespace std;
add()
{
     int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;

}
sub()
{

    int a,b,c;
    cout<<"eter two number"<<endl;
    cin>>a>>b;
    c=a-b;
    cout<<c<<endl;

}
area()
{

    float r,a;
    cout<<"enter radis of circle";
    cin>>r;
    a=3.14*r*r;
    cout<<a<<endl;

}
main()
{

    add();
    sub();
    area();

}
