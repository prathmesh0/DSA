#include<iostream>
//unsolved example
using namespace std;
void fibo(int n){
int a,b,c,i;
for(i=1;i<=n;i++){
    c=a+b;
    cout<<c;
    a=b;
    b=c;
}


}

void main(){
    int n;
    cout<<"enterd a number :"<<endl;
    cin>>n;
    fibo(n);
  
}