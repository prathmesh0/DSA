#include<iostream>
using namespace std;

int max(int arr[],int n){
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
       // if(arr[i]>maxi)
       // maxi=arr[i];
        maxi= max(maxi,arr[i]);
    }
    return maxi;
}

int min(int arr[],int n){
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        //if(arr[i]<mini)
        //mini=arr[i];
        mini= min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maximum=max(arr,n);
    int minimum=min(arr,n);
    cout<<"MAXIMUM VALUE IN THE ARRAY IS "<<maximum<<endl;
    cout<<"MINIMUM VALUE IN THE ARRAY IS "<<minimum<<endl;
    return 0;
}