#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"enter the age of three person"<<endl;
    cin>>x>>y>>z;
    if(x<y && x<z)
     cout<<" younger age = "<<x;
    else if(y<x && y<z)
     cout<<"younger age ="<<y;
     else
     cout<<" younger age = "<<z;

    return 0;
}