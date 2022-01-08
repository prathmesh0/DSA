#include<iostream>
using namespace std;

int main(){
    int n,i;
  
    cout<<"enter a number"<<endl;
    cin>>n;
    for ( i = 2; n>1; i++)
    while( n%i==0){
        cout<<" "<<i;
        n=n/i;
    }
    return 0;

}