#include<iostream>
using namespace std;


int  NumberOfstep(int n){
    //base condition
    if(n==0)
    return 1;
    if(n<0)
    return 0;

    //RR
    int ans=NumberOfstep(n-1) +NumberOfstep(n-2);
    return ans;
   
     
}

int main(){
    int step;
    cin>>step;
   int ans = NumberOfstep(step);
   cout<<ans<<endl;

    return 0;
}