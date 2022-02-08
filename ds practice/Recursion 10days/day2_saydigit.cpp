#include<iostream>
using namespace std;

 void sayDigit(int n,string arr[]){
     //base case
     if(n==0)
     return ;

     //find digit(process)
     int rem= n % 10;
     n/=10;
    
    //recursive call
     sayDigit(n,arr);
       cout << arr[rem] << " ";


 }

int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
    return 0;
}