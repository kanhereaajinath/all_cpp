#include<iostream>
using namespace std;
convert(int n)
{

    int i=0,arry[10];

    while(n>0)
    {


        arry[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j=i-1; j>=0; j--)
        cout<<arry[j];
}
main()

{
    int p;
    cout<<"enter a number";
    cin>>p;

    convert(p);
}
