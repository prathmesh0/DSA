

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
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
    int ans=linearSearch(arr,n,key);

        cout<< key <<" is present at "<< ans <<" index."<<endl;
   

    return 0;
}