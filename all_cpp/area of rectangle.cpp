/* C Program to Calculate to take length and breadth
 of rectangle Area and Perimeter of Rectangle */
#include<iostream>
using namespace std;
main()
{
    int l,b,a,p;
    cout<<"Enter side of rectangle ";
    cin>>l>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"area of rectangle="<<a<<endl;
    cout<<"perimeter of rectangle="<<p;

}
