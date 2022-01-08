#include<iostream>
using namespace std;

int main(){
    int n,y=0,r,ori;
  
    cout<<"enter a number:"<<endl;
    cin>>n;
    ori=n;
    while(n!=0){
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    if(ori==y){
        cout<<"no. is palindrome";
    }
    else
     cout<<"no. is  not palindrome";
    return 0;

}