#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int s=0, e=n-1;
    //int mid=(s+e)/2;//throw error when limit of int is exceed
    int  mid=s+(e-s)/2;
    while (s<=e)
    {
       if(arr[mid]==key)
       return mid;
       else if(key>arr[mid])
       s=mid+1;
       else
       e=mid-1;

      // mid=(s+e)/2;
      mid=s+(e-s)/2;
    }
    return -1;
    
    }

int main(){
    int n,key;
    int arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the number that you want to find:"<<endl;
    cin>>key;
    int ans=binarySearch(arr,n,key);
    cout<<"index of "<< key <<" is "<<ans<<endl;
    return 0;
}