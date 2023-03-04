#include<iostream>
using namespace std;
main()
{
    int i=1,sum=0,n;
    cout<<"enter a number";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"addtion "<<sum<<endl;
}

