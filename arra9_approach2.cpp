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
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}