#include<iostream>
using namespace std;
int fact(int a){
int fact=1;
int i;
for(i=1;i<=a;i++){
fact=fact*i;
}
return fact;

}

int main(){
    int n;
    cout<<"enterd a number :"<<endl;
    cin>>n;
    cout<<"factorial value ="<<fact(n);
    return 0;
}