#include<iostream>
using namespace std;
class student
{

private:
    int id;
    string name;
public:
    void setdata();
    void showdata();

};
void student::setdata()
{
    cout<<"enter student id";
    cin>>id;
    cout<<"enter sutedent name:";
    cin>>name;

}
void student::showdata()
{

    cout<<id<<" "<<name<<endl;


}
main()
{
    student s[3];
    int i;
    cout<<"enter student infroemation:";
    for(i=0;i<3;i++)
    {

        s[i].setdata();

    }
    cout<<"show your data:";
    for(i=0;i<3;i++)
    {
        s[i].showdata();

    }
}
