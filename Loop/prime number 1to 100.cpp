#include<iostream>
using namespace std;
main()
{

    int i,flag=0,j;
    for(i=2;i<=200;i++)
    {

        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;

            else if(i==j+1)
                cout<<i<<" ";
        }


    }
}
