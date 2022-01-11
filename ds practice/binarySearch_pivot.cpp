#include<iostream>
using namespace std;
int pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int n;
    int arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of a array to find index of pivot element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"pivot element is at index = "<< pivot(arr,n)<<endl;
    return 0;
    return 0;
}