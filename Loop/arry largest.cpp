#include<iostream>
using namespace std;
arry()
{
    int i,n,arr[10];
    cout<<"enter total number of arry";
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++)
    {

        cout<<"enter a number"<<i+1<<" ";
        cin>>arr[i];

    }
    for(i=0;i<=n;i++)
    {

        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
    cout<<"largest"<<arr[0];

    }

main()
{

    arry();
}
