#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    void show()
    {

        cout<<i<<" "<<j<<endl;

    }
    test (int x, int y)
    {
        i=x;
        j=y;
        cout<<"consructor called "<<endl;


    }
};
main()
{

    test t1(100,200);
    test t2(200,300);
    t1.show();
    t2.show();

}
