#include<iostream>
using namespace std;

int main(){
    int i,n;
    int sum=0;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
     sum=sum+i;
    }
 cout<<"sum = "<<sum;
    return 0;

}