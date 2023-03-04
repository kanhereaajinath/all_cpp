#include<iostream>
using namespace std;
template<class t>
void show(t i)
{

    cout<<"tempalate funcion called"<<endl;
    cout<<i<<endl;

}
void show(int x)
{
    cout<<"in function called"<<endl;
    cout<<x<<endl;
}
main()
{

    show(1.4f);
    show(390);

}
