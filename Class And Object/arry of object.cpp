#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void setdata()
    {

        cout<<"enter student id";
        cin>>id;
        cout<<"enter student name";
        cin>>name;

    }
    void showdata()
    {

        cout<<id<<" "<<name<<endl;

    }

};
main()
{

    student s[3];
    int i;
    cout<<"enter your data"<<endl;

    for(i=0;i<3;i++)
    {

        s[i].setdata();

    }
    cout<<"your data"<<endl;
    for(i=0;i<3;i++)
    {

        s[i].showdata();

    }
}
