#include<iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
     fact=fact*i;
     i++;
    }
 cout<<"factorial = "<<fact;
    return 0;

}