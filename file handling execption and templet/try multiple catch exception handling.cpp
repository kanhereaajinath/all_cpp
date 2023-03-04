#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    int arrr[5];
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    try
    {

        if(b>4||b<0)
        {

            throw 1.3f;
        }
      if(b==0)
      {
          throw b;

      }
      arrr[b]=100;
      c=a/b;
      cout<<c<<endl;

    }
    catch(int e)
    {

        cout<<"con not divede by zero"<<endl;

    }
    catch(float e)
    {

        cout<<"index is not valid"<<endl;

    }
    cout<<"end"<<endl;
}
