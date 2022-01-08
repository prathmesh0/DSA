#include<iostream>
using namespace std;

int main(){
    
    int arr[10];
    cout<<"enter 10 numbers :"<<endl;
   
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<"You entered number :"<<endl;
    for (int i = 0; i < 10; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    return 0;
}