#include<iostream>
using namespace std;

void update(int *p){
    // p=p+1;
    // cout<<"inside this function "<< p <<endl;
    *p+=1;
}

int getsum(int *arr, int n){
    cout<<endl<<"size : "<< sizeof(arr)<<endl;

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
   /* int value=5;
    int *p =&value;

    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;
  */
 int arr[6]={1,2,3,4,5,6};
 cout<<"sum is "<< getsum(arr+3,3);
    return 0;
}