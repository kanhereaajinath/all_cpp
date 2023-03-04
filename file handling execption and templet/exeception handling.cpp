#include<iostream>
using namespace std;
main()
{

    int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        {

            throw b;

        }
        c=a/b;
        cout<<c<<endl;
    }
    catch (int e)
    {

        cout<<"can not devide by zero"<<endl;

    }
    cout<<"end"<<endl;
}
