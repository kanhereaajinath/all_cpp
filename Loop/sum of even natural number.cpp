#include<iostream>
using namespace std;
main()
{

    int i,n,sum=0;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n*2;i++)
    {

        if(i%2==0)
        {

            cout<<i<<endl;
            sum=sum+i;
        }

    }
    cout<<"addtion ="<<sum;
}
