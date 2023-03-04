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
        cout<<"enter id and name"<<endl;
        cin>>id>>name;

    }
    void showdata()
    {

        cout<<id<<" "<<name<<endl;
    }
};
class mark:virtual public student
{


private:
    int m1,m2;

public:
    void setmark()
    {

        cout<<"enter mark of studnt"<<endl;
        cin>>m1>>m2;

    }
    int getm1()
    {

        return m1;

    }
    int getm2()
    {

        return m2;

    }
    void showmark()
    {

        cout<<m1<<" "<<m2<<endl;

    }

};
class sport: virtual public student
{

private:
    int grade;
public:
    void setgrade()
    {

        cout<<"enter grade:"<<endl;
        cin>>grade;

    }
    void showgrade()
    {

        cout<<grade<<endl;

    }
    };
class result:  public mark, public sport
{

public:
    void showresult()
    {

        showdata();
        showgrade();
        showmark();
        int avg=(getm1()+getm2())/2;
        cout<<"Avarage mark are"<<avg<<endl;
    }
};
main()
{

    result ob;
    ob.setdata();
    ob.setmark();
    ob.setgrade();
    ob.showresult();



}
