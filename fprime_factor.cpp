#include<iostream>
using namespace std;


void pf(int n){
    int i;
     
    for ( i = 2; n>1; i++)
    while( n%i==0){
        cout<<" "<<i;
        n=n/i;
    }

}

int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    pf(n);
    return 0;
}