#include<iostream>
using namespace std;
void rowSum(int arr[][3],int rows,int cols ){
   
     for (int rows = 0; rows < 3; rows++)
    {
        int sum=0;
      for(int cols=0; cols < 3; cols++){
         sum+= arr[rows][cols];
      }
      cout<<"sum of row "<<rows <<" = "<<sum;
          cout<<endl;
    }
    cout<<endl;
}

void columnSum(int arr[][3],int rows,int cols ){
    for (int cols = 0; cols < 3; cols++)
    {
        int sum=0;
      for(int rows=0; rows < 3; rows++){
         sum+= arr[rows][cols];
      }
      cout<<"sum of column "<<cols <<" = "<<sum;
          cout<<endl;
    }
    cout<<endl;
}

int largestRowsum(int arr[][3],int rows,int cols ){
   
    int maxi=INT16_MIN;
    int rowindex=-1;
     for (int rows = 0; rows < 3; rows++)
    {
        int sum=0;
      for(int cols=0; cols < 3; cols++){
         sum+= arr[rows][cols];
      }
      if(maxi<sum){
          maxi=sum;
          rowindex=rows;
      }
      
    }
    cout<<"maximum sum of row is :"<<maxi<<endl;
    return rowindex;
}





int main(){
     int arr[3][3];
    cout<<"enter the array elements: "<<endl;
    for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cin>>arr[rows][cols];
      }
    }

     for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cout<<arr[rows][cols]<<" ";
      }
      cout<<endl;
    }    
     
    rowSum(arr,3,3);
    columnSum(arr,3,3);

    //largest row sum
    int ans=largestRowsum(arr,3,3);
    cout<<"largest row sum is at index : "<<ans<<endl;
    return 0;
}