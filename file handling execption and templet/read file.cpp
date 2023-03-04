#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream f1("test7.txt");
    string msg;
    f1>>msg;
    cout<<msg;
    f1.close();

}
