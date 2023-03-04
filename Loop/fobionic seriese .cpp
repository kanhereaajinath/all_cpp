#include<iostream>
using namespace std;
main()
{

    int a=5,b=6,n,i,c,temp;
    cout<<"enter a numbe";
    cin>>n;
    for(i=1;i<=n;i++)
    {

    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    }


}
