#include<iostream>
using namespace std;
int sum(int a){
int s=0;
int i;
for(i=1;i<=a;i++){
s=s+i;
}
return s;

}

int main(){
    int n;
    cout<<"enterd a number :"<<endl;
    cin>>n;
    cout<<"sum="<<sum(n);
    return 0;
}