#include<iostream>
using namespace std;
 void swap(int a ,int b);
main()
{

    int p,q;
    cout<<"enter two number"<<endl;
    cin>>p>>q;
    cout<<"before swaping in main fucntion"<<endl;
    cout<<"p="<<p<<"q="<<q<<endl;
    swap(p,q);
    cout<<"after swaping in main  function"<<endl;
    cout<<"p="<<p<<"q="<<q<<endl;

}
 void swap(int a,int b)
{

    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping in swap function"<<endl;
    cout<<"a="<<a<<"b="<<b;

}

