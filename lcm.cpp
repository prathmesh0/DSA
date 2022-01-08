#include<iostream>
using namespace std;

int main(){
    int a,b,l;
  
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b)){
       if(l%a==0 && l%b==0)
       break;
    }
    cout<<"lcm ="<<l<<endl;
    return 0;

}