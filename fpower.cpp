#include<iostream>
using namespace std;

int pow(int x, int y){
    int i,value=1;
    for(i=1;i<=y;i++){
         value=value*x;
    }
    return (value);
}

int main(){
    int a,b,r;
    cout<<"enter number and its exponent :"<<endl;
    cin>>a>>b;
    r=pow(a,b);
    cout<<"answer = :"<<r<<endl;
    return 0;
}