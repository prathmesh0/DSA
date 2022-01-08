#include<iostream>
using namespace std;

int main(){
    int n,arr[n];
    cout<<"enter the no. of element in array:"<<endl;
    cin>>n;
    cout<<"enter array element :"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
     int largest=arr[0];
     int smallest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
         if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"largest element :"<<largest<<endl;
    cout<<"smallest element :"<<smallest<<endl;
        return 0;
}