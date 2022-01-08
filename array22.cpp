#include<iostream>

using namespace std;

void cyclicOrder(int* a,int* b, int* c){
   int temp;
temp = *b;
*b = *a;
*a = *c;
*c = temp; 
}

int main(){
    int a,b,c;
    cout<<"Enter three number";
    cin>>a>>b>>c;
    cout<<"number before swapping:"<<endl;
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    cyclicOrder(&a,&b,&c);
    cout<<"number after swapping:"<<endl;
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    return 0;
}