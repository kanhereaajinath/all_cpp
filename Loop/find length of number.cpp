#include<iostream>
using namespace std;
main()
{

    int n,total=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0)
    {

        n=n/10;
        total++;


    }
    cout<<"total lenght is"<<total;

}
