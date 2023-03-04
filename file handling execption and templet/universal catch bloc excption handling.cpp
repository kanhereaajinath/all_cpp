#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    int arr[5];
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    try
    {

        if(b>4||b<0)
        {

            throw 3.4f;

        }
        if(b==0)
        {

            throw b;

        }
        arr[b]=100;
        c=a/b;
        cout<<c<<endl;
    }
    catch(...)
    {

        cout<<"errror occuerd"<<endl;

    }
    cout<<"end"<<endl;
    }



