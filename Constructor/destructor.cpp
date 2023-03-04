#include<iostream>
#include<string.h>
using namespace std;
class student
{

private:
    char *name;
    int len;
public:
    student(char *p)
    {

        len=strlen(p);
        name=new char[len];
        strcpy(name,p);

    }
    void show()
    {

        cout<<name<<" "<<len<<endl;

    }
    ~student()
    {

        cout<<"destructor called!!!"<<endl;
        //delete(name);

    }


};
main()
{

    student s1("aajinath");
    student s2("ram");
    s1.show();
    s2.show();

}
