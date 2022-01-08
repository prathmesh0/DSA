#include<iostream>
using namespace std;

int main(){
    int x=10;
     int *p= &x;
    cout<<"address of x="<<p<<endl;
    cout<<"address of x="<<&x<<endl;
    cout<<"value  of x="<<*p<<endl;
    cout<<"value  of x="<<x<<endl;
    *p=20;
    cout<<"after doing *p=20 the value of *ptr is"<< (*p);
      return 0;
}