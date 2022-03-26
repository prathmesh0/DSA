#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"enter the array element : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //printing output
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
    cout<<endl;

    //initialization 
    //int arr1[3][3]={1,2,3,45,6,7,8,8,9};
    int arr1[3][3]={{11,22,33},{44,55,66},{111,22,444}};
     //printing output
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
      cout<<endl;
    }

    return 0;
}