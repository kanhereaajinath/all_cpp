#include<iostream>
using namespace std;
class account
{
private:
    int acc_num;
    string name;
    int balance;
public:
    void create()
    {
        cout <<"enter your account number :"<<endl;
             cin>>acc_num;
        cout<<"enter your name :";
        cin >>name;
        cout<<"enter inital balance "<<endl;
        cin>>balance;
    }
    void deposit ()
    {
        int amt;
        cout <<" enter amount to deposite:";
        cin>>amt;
        balance =amt;
    }
    void withdraw ()
    {
        int amt ;
        cout <<"enter amount to withdraw:";
        cin >>amt;
        balance-=amt;

    }
    void print ()
    {
        cout <<"account number "<<acc_num<< endl;

        cout<<"name :"<<name<< endl;
        cout <<"balance :"<<balance<<endl;


    }
};
main()
{

    account obl;
    obl.create();
    obl.deposit();
    obl.withdraw();
    obl.print();
}
