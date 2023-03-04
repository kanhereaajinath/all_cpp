#include<iostream>
using namespace std;
prime(int a)
{
    int i,n,flag=0;

    for(i=2;i<a/2;i++)
    {
     if(a%i==0)
        flag=1;
     break;
    }
    if(a==1)
    {

        cout<<"number is not prime nor composite";

    }
    else
    {

        if(flag==0)
            cout<<"number is prime";
        else

            cout<<"number is not prime";

    }

}
main()
{

    int p;
    cout<<"enter a number";
    cin>>p;
    prime(p);


}
