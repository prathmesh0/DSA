#include<iostream>
using namespace std;

void armstrong(int n){
    int r,y=0,ori;
    ori=n;
    while(n!=0){
        r=n%10;
        y=y+r*r*r;
        n=n/10;
    }
    if(ori==y){
        cout<<"no. is armstrong";
    }
     else
     cout<<"no. is  not armstrong";
}

int main(){
    int x;
     cout<<"enter a number:"<<endl;
    cin>>x;
    armstrong(x);
    return 0;

}