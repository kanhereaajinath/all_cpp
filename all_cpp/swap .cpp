//Write a Program to swap the content of two variable.
#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter a number "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;


    cout<<"swap of two variable."<<endl<<a<<endl<<b;
}
