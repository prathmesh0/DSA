#include<iostream>
using namespace std;

int main(){
    int a,b ,t;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    cout<<"number befrore swapping :"<<a<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"number befrore swapping :"<<a<<b<<endl;
    return 0;
}