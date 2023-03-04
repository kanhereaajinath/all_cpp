#include<iostream>
using namespace std;
add(int *p,int *q)
{

    *p=*p+*p;
    *q=*q+*q;

}
main()
{

    int a=2;
   int b=4;
    cout<<a<<" "<<b<<endl;
    add(&a,&b);
    cout<<a<<" "<<b<<endl;
}
