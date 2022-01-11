#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
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
    cout<<"enter the that you want to find:"<<endl;
    cin>>key;
    bool ans=linearSearch(arr,n,key);
    if(ans){
        cout<<"key is present"<<endl;
    }
    else
    cout<<"key is not present"<<endl;

    return 0;
}