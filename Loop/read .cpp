#include<iostream>
using namespace std;
main()
{

    int i,sum=0,n,p;
     float avg;
    cout<<"enter a number";
    cin>>n;
    cout<<"enter your number";

    for(i=0;i<=n;i++)
    {
        cin>>p;
        sum=sum+p;

    }
    avg=sum/n;
    cout<<sum;
    cout<<avg;


}
