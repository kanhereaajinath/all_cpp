#include<iostream>
using namespace std;
class account
{

private:
    int acc_num;
    string name;
    int balance;
public:
    void creat()
    {

        cout<<"enter your account number:";
        cin>>acc_num;
        cout<<"enter your name:";
        cin>>name;
        cout<<"enter your intial balance:";
        cin>>balance;

    }
    void dipo()
    {

        int amt;
        cout<<"enter your deposti"<<endl;
        cin>>amt;
        balance+=amt;

    }
    void with()
    {

        int amt;
        cout<<"enter your withdraw ammount"<<endl;
        cin>>amt;
        balance-=amt;

    }
    void print()
    {

        cout<<"account number"<<" "<<acc_num<<endl;
        cout<<"name"<<" "<<name<<endl;
        cout<<"balance"<<" "<<balance<<endl;

    }
};
main()
{

account obj;
obj.creat();
obj.dipo();
obj.with();
obj.print();

}
