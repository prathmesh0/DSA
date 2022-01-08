#include<iostream>
using namespace std;


void prime(int a){
    int i,x;
    x=a;
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        break;
    }
    if(i==x)
    cout<<"prime number"<<endl;
    else
    cout<<" not a prime number"<<endl;

}

int main(){
    int n,r;
    cout<<"enter a number :"<<endl;
    cin>>n;
     prime(n);
    return 0;
}