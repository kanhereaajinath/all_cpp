#include<iostream>
#include<string.h>
using namespace std;
class studnent
{

private:
    char *name;
    int len;
public:
    studnent(char *p)
    {

        len=strlen(p);
        name=new char[len];
    strcpy(name,p);

    }
    void show()
    {

        cout<<name<<" "<<len<<endl;

    }


};
main()
{

    studnent t1("aajinath");
    studnent t2("ram");
    t1.show();
    t2.show();

}
