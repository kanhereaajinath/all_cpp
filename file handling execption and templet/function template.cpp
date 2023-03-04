#include<iostream>
using namespace std;
template<class t>
void show(t i)
{

    cout<<i<<endl;
}
main()
{

    show(1000);
    show(30.65f);
    show("aajinath");
    show(200+400);

}
