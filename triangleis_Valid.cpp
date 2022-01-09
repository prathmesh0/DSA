#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"enter angle of triangle"<<endl;
    cin>>a>>b>>c;
    if((a+b+c==180))
     cout<<"triangle is valid";
     else
     cout<<"triangle is  not valid ";

    return 0;
}