#include<iostream>
using namespace std;

int main(){
    int no1,no2,hcf;
  
    cout<<"enter two number:"<<endl;
    cin>>no1>>no2;
    for(hcf=no1<no2?no1:no2;hcf>=1;hcf--){
       if(no1%hcf==0 && no2%hcf==0)
       break;
    }
    cout<<"hcf ="<<hcf<<endl;
    return 0;

}