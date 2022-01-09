#include<iostream>
//solve again
using namespace std;

int main(){
    int l,u,i,x;
  
    cout<<"enter range :"<<endl;
    cin>>l>>u;
    for(x=l+1;x<=u-l;x++){
    for (i=2;i<=x-1;i++ )
    if(x%i==0)
    break;
   if(i==x)
   cout<<"prime numbers are :"<<x;
    }

return 0;
}