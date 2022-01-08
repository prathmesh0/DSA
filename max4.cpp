#include <iostream>
#include <cstdio>
using namespace std;



int main() {
    int a,b,c,d;
    cout<<"enter 4 number ="<<endl;
    cin>>a>>b>>c>>d;
    if(a>b&&a>c&&a>d)
    cout<<a;
    else if(b>c&&b>d)
    cout<<b;
    else if(c>d)
    cout<<c;
    else {
    cout<<d;
    }
    
    return 0;
}