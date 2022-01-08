#include<iostream>
using namespace std;

void reverse(int x){
    int r,y=0;
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    cout<<"reverse number :"<<y<<endl;
    
}

int main(){
    int n ;
    cout<<"Enter a number :"<<endl;
    cin>>n;
     reverse(n);
    //cout<<"reverse number :"<<r<<endl;
    return 0;
}