#include<iostream>
using namespace std;
add(int a,int *b)
{

    a=a+a;
    *b=*b+*b;
}
main()
{

    int a=2;
    int b=4;
    cout<<a<<" "<<b<<endl;
    add(a,&b);
    cout<<a<<" "<<b<<endl;

}
