#include<iostream>
using namespace std;

void palindrome(int x){
    int r,y=0,ori;
    ori=x;

    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    if(ori==y)
    cout<<"number is palindrome :"<<endl;
    else
    cout<<"number is  not palindrome :"<<endl;
    
}

int main(){
    int a;
    cout<<"enter number :"<<endl;
    cin>>a;
    palindrome(a);
    return 0;
}