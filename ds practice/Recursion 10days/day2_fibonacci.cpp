#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==0 || n==1)
    return n;

    //RR
    int ans= fibo(n-1) + fibo(n-2);
    return ans;
}

int main(){
    int term;
    cout<<"enter the term : "<<endl;
    cin>>term;
    int ans= fibo(term);
    cout<<ans<<endl;
    return 0;
}