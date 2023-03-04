#include<iostream>
#include<fstream>
using namespace std;
main()
{

    ifstream f1("test8.txt");
    char arr[80];
    while(f1.eof()==0)
    {
        f1.getline(arr,80);
        cout<<arr<<endl;
    }
    f1.close();
}
