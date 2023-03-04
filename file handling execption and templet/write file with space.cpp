#include<iostream>
#include<fstream>
using namespace std;
main()
{

    ofstream f1("test8.txt");
    string msg;
    cout<<"enter data"<<endl;
    getline(cin,msg);
    f1<<msg;
    f1.close();

}
