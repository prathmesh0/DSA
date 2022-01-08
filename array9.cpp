#include<iostream>
using namespace std;

int main(){
    
    int n, arr[n];
    cout<<"enter the number of element in  array:"<<endl;
    cin>>n;
    cout<<"enter  array elements :"<<endl;
   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = n-1; i>=0; i--)
    {
      cout<<arr[i]<<" ";
    }
    
}