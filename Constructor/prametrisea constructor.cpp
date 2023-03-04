#include<iostream>
using namespace std;
class A
{

private:
    int i;
public:
    A()
    {

        i=30;
        cout<<"cnstructor without argument"<<endl;


    }
    A(int x)
    {

        i=x;
    }
    int geti()
    {

        return i;

    }
};
class B:public A
{

private:
    int j;
public:
    B(int x, int y):A(x)
  {

      j=y;
      cout<<"in B"<<endl;
  }
  void add()
  {

      cout<<geti()+j<<endl;
  }
};
main()
{

    B ob(190,339);
    ob.add();
}
