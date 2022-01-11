#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
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

int binarySearch(int arr[], int s, int e, int key){
    
    
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
    cout<<"enter the key that you want to find:"<<endl;
    cin>>key;
    int pivot=getpivot(arr,n);

    int ans;
    
    if(arr[pivot]<=key && arr[n-1]>=key){
        ans =binarySearch(arr,pivot,n-1,key);//bs on 2nd line
    }
    else{

        ans=binarySearch(arr,0,n,key);//bs on 1st line
    }

    if(ans==-1){
        cout<<"key is not present"<<endl;
    }
    else{
         cout<<"key is present"<<endl;
    }
    
    return 0;
}