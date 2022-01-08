#include<iostream>
using namespace std;

int main(){
    int m,n,value=1;
  
    cout<<"enter value of base and exponent:"<<endl;
    cin>>m>>n;
    for (int i = 0; i < n; i++)
    {
    value=value*m;
       }
    cout<<"answer ="<<value<<endl;
    return 0;

}