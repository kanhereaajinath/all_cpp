#include<iostream>
#include<stdio.h>
using namespace std;
class vector
{

    int size;
    int *coord;
public:
    vector()
    {
        cout<<"enter number of cordinates:";
        cin>>size;
        coord=new int[size];
        cout<<"\n enter "<<size<<"co-ordinates:\n";
        for(int i=0i<size;i++)
        {
            cout<<" ";
            cin>>coord[i];


        }
    }
    vector modify
};
