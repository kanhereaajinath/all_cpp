#include<iostream>
#include<fstream>
using namespace std;
main()
{

    ofstream f1("test7.txt");
    string msg;
    cout<<"enter data"<<endl;
    cin>>msg;
    f1<<msg;
    f1.close();

}
