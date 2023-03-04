#include<iostream>
using namespace std;
add(int a, int b)
{

    int c;
    c=a+b;
    cout<<"aadition is ="<<c<<endl;

}
sub(int a, int b)
{

    int c;
    c=a-b;
    cout<<"substraction is "<<c<<endl;

}
area (float r)
{

    float a;
    a=3.14*r*r;
    cout<<"area is"<<a<<endl;

}
main()
{

    add(60,65);
    sub(45,67);
    area(4.5f);
}
