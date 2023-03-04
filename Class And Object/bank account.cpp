#include<iostream>
using namespace std;
class custmer
{

private:
    string first_name;
    string last_name;
public:
    void setdata()
    {
        cout<<"enter custmer first name"<<endl;
        cin>>first_name;
        cout<<"enter custmer last name:"<<endl;
        cin>>last_name;
        }
        void showdata()
        {

            cout<<first_name<<"    "<<last_name<<endl;

        }
};
class account
{
private:
int balance;
public:
void bankset()
{

    cout<<"enter intial balance:";
    cin>>balance;

}
void deposite()
{
    int amt;
    cout<<"enter diposte ammount";
    cin>>amt;
    balance+=amt;

}
void withdraw()
{

    int amt;
    cout<<"enter withdraw ammount";
    cin>>amt;
    balance-=amt;

}
void print()
{

    cout<<balance<<endl;

}

};
main()
{

    custmer s1;
    custmer s2;
    account s3;
    account s4;
    s1.setdata();
    s2.setdata();
    s1.showdata();
    s2.showdata();
    s3.bankset();
    s4.bankset();
    s3.deposite();
    s4.deposite();
    s3.withdraw();
    s4.withdraw();
    s3.print();
    s4.print();

}
