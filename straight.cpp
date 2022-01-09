#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float s1,s2;
    cout<<"enter the cordinate x1and y1"<<endl;
    cin>>x1>>y1;
    cout<<"enter the cordinate x2and y2"<<endl;
    cin>>x2>>y2;
    cout<<"enter the cordinate x3and y3"<<endl;
    cin>>x3>>y3;
     s1=(y2-y1)/(x2-x1);
     s2=(y3-y1)/(x3-x1);

    if(s1==s2)
     cout<<" straight line";
     else
     cout<<"not a straight line";

    return 0;
}