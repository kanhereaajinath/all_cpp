#include<iostream>
using namespace std;
main()
{

    int i,n,sum=0;
    cout<<"enter a number";
   cin>>n;
    for(i=1;i<=n;i++)
    {
cout<<i<<" ";
        sum=sum+i;
    }
   cout<<"\n"<<sum;
}
