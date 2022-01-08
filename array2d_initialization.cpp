#include<iostream>
using namespace std;

int main(){
    //initialization of array
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12,};
    // int arr[3][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12}};
    //accessing 2D array elements
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}} ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Element at arr ["<<i<<"] ["<<j<<"] :";
            cout<<arr[i][j]<<endl;
        }
        
    }
       
    return 0;
}