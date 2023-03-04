/* Write a Program to take 3 digit number from user
  and print its reverse number */
#include<iostream>
using namespace std;
main()
{
    int n,a,b,c,d,e;
    cout<<"Enter 3 digit number"<<endl;
    cin>>n;
    a=n/100;
    b=n%100;
    c=b/10;
    d=b%10;
    e=a+c*10+d*100;
    cout<<" its reverse number="<<e;
}
