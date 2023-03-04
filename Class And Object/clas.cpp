#include<iostream>
using namespace std;
class test
{

private:
    void show()
    {

        cout<<"in private:"<<endl;;

    }
public:
    void disp()
    {

    cout<<"in public"<<endl;
    show();
    }
};
main()
{

    test ob;
    ob.disp();

}
