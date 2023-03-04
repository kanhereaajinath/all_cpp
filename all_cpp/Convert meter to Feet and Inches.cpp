//Write a Program to Convert meter to Feet and Inches

/*
1 meter=12 inches
1 meter=100 centimeters
1 meter= 3.28084 Feet
*/

#include<iostream>
using namespace std;
main()
{
    float m=1,f,I,cm;
    cout<<"Enter  a meter"<<endl;
    cin>>m;
    I=m*12;
    f=m*3.28084;
    cm=m*100;
    cout<<"Inches="<<I<<endl;
    cout<<"feet="<<f<<endl;
    cout<<"centimeters="<<cm<<endl;

}
