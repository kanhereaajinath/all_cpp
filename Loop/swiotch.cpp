#include<iostream>
using namespace std;
main()
{

    int a,b,c;
    char choice;
    cout<<"enter your choice(+,*,/,-)"<<endl;
    cin>>choice;
    cout<<"enter two number";
    cin>>a>>b;
    switch(choice)

    {

    case '+':
        c=a+b;
        cout<<"addtion ="<<c;
        break;
    case '-':
        c=a-b;
        cout<<"sub="<<c;
        break;
    case '*':
        c=a*b;
        cout<<"mul"<<endl;
        break;

    case '/':
        c=a/b;
        cout<<"div ="<<c;
        break;
    default:
        cout<<"wrong choice";
            break;

    }
}
