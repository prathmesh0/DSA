#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
   for(int i=0; i<n; i++){
       int temp=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>temp){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
   }
}

/* Function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout <<" "<< arr[i];
    
}

int main(){
     int arr[100],n;
     cout<<"Enter the number of elment:"<<endl;
     cin>>n;
     cout<<"enter the elememt if an array :"<<endl;
     for(int i=0; i<n ; i++){
         cin>>arr[i];
     }
    insertionSort(arr, n);
    cout <<"Sorted array: \n";
    printArray(arr, n);
    return 0;
    
}