#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
       else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
    
    }
    int lastOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
       else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
    
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
    cout<<"enter the key that you want to find:"<<endl;
    cin>>key;
    int ans=firstOcc(arr,n,key);
    int ans1=lastOcc(arr,n,key);
    cout<<"first occurence of "<< key<<" is at index "<<ans<<endl;
    cout<<"last occurence of "<< key<<" is at index "<<ans1<<endl;
    cout<<"total no. of occurence = "<<(ans1-ans)+1;
    return 0;
 
}