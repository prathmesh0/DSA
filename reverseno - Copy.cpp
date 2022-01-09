#include<iostream>
using namespace std;

int main(){
    int x,y=0,r;
  
    cout<<"enter a number:"<<endl;
    cin>>x;
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    cout<<"reverse no. ="<<y<<endl;
    return 0;

}