#include<iostream>
using namespace std;
main()
{

    int i,b,c,d,e,sum=0;
    for(i=1;i<=1000;i++)
    {
   b=i/100;
 c=i%100;
 d=c/10;
 e=c%10;
 sum=b*b*b+d*d*d+e*e*e;

if(i==sum)
{
    cout<<i<<" ";
}
    }
}








