#include<iostream>
using namespace std;
class student
{
private:
    string first_name;
    string last_name;
    int year;
    string branch;

public:
    void setdata()
    {

        cout<<"enter student first name:"<<endl;
        cin>>first_name;
        cout<<"enter student last name:"<<endl;
        cin>>last_name;
        cout<<"enter studnet class:"<<endl;
        cin>>year;
        cout<<"enter student branch"<<endl;
        cin>>branch;



    }
    void showdata()
    {

        cout<<first_name<<"   "<<last_name<<"    "<<year<<"  "<<branch <<endl;
    }

};
main()

{

    student s1;
    student s2;
    s1.setdata();
    s2.setdata();
    s1.showdata();
    s2.showdata();
}
