#include<iostream>
using namespace std;

int main(){
    int i,n;
    int fact=1;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
     fact=fact*i;
    }
 cout<<"factorial = "<<fact;
    return 0;

}