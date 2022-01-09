#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,largest;
     cout<<" enter 3 sides of triangle:";
    cin>>s1>>s2>>s3;
  
    if((s1==s2)&&(s2==s3))
        cout<<"triangle is equilateral"<<endl; 
    else if(((s1==s2))||((s2==s3))||((s1==s3)))
         cout<<"triangle is isoscale\n"<<endl;
    else if((s1*s1)+(s2*s2)==s3*s3)
         cout<<"triangle is right angle"<<endl;
     else
         cout<<"triangle is  scalene"<<endl;
     return 0;
}