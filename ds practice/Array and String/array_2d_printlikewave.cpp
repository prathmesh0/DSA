
//error occure
#include<iostream>
#include<vector>
using namespace std;

vector<int>  printWave(int arr[][3],int rows,int cols){
   vector<int>ans;
for (int col = 0; col < cols; col++)
{
  if(col&1)   //odd index-->bottom to top
  {
      for(int row=rows-1; row>0;row--){
        //  cout<<arr[row][col]<<" ";
         ans.push_back(arr[row][col]);
      }
  }
  else{   //0 or even index--->top to bottom
      for(int row=0; row<rows;row++){
        //   cout<<arr[row][col]<<" ";
        ans.push_back(arr[row][col]);
      }
  }
  cout<<endl;
}
return ans;

}


int main(){
    int arr[3][3];
    // int rows,cols;
   //// cout<<"enter the no. of rows and columns of matrix"<<endl;
    // cin>>rows>>cols;
    cout<<"enter the element of matrix:"<<endl;
    for (int i = 0;  i< 3; i++)
    {
      for(int j=0; j < 3; j++){
          cin>>arr[i][j];
      }
    }
    vector<int>p= printWave(arr,3,3);
    for(int x:p)
    cout<<x<<" ";
    cout<<endl;
    
  
    return 0;
}