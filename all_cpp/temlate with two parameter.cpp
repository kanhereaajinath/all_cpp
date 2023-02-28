#include<iostream>
using namespace std;
template < class t, class v>
class test
{

private:
    t i;
    v j;
public:
    test(t x,v y)
    {

        i=x;
        j=y;

    }
    void show()
    {

        cout<<i<<" "<<j<<endl;
    }

};
main()
{

    test <int, string > t1(110,"aajinath");
    t1.show();
}
