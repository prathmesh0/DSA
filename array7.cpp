#include<iostream>
using namespace std;

int main(){
    
    int n, arr[5],found=0;
    cout<<"enter 5 numbers :"<<endl;
   
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"give a number :"<<endl;
    cin>>n;
    cout<<"You entered number :"<<endl;
    for (int i = 0; i < 5; i++)
    {
       if(n==arr[i]){
       found=1;
       break;
       }
    }
    if(found){
        cout<<"number is present in the array"<<endl;

    }
    else{
        cout<<"number is not present in the array"<<endl;

    }
    
    
    return 0;
}