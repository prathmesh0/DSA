#include<iostream>
using namespace std;

void lcm(int x,  int y){
    int l;
    if(x>y)
    l=x;
    else
    l=y;
    while(1){
        if(l%x==0 && l%y==0){
            cout<<"lcm of "<< x<< "and "<< y <<" ="<<l;
            break;
        }
        l++;
    }
  
}


void hcf(int x,  int y){
    int h;
    for(h=x<y?x:y;h>=1;h--){
        if(h%x==0 && h%y==0)
        break;
    }
    cout<<"HCF of given number is "<< hcf<<endl;
}

int main(){
    int n1,n2;
    cout<<"Enter two number :"<<endl;
    cin>>n1>>n2;
    lcm(n1,n2);
    hcf(n1,n2);
    //cout<<"LCM of given number is "<< lcm<<endl;
    //cout<<"HCF of given number is "<< hcf<<endl;
    return 0;

}