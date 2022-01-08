#include<iostream>
//check again
using namespace std;

int main(){
    int n,y,r,i;
  for(i=1;i<=1000;i++){
      y=0;
      n=i;
    while(n!=0){
        r=n%10;
        y=y+r*r*r;
        n=n/10;
    }
    if(y==n)
        cout<<n;
  }

}