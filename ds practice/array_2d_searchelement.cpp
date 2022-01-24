#include<iostream>
using namespace std;
bool searchElement(int arr[][3],int rows,int cols,int target){
     for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          if((arr[rows][cols])==target){
              return 1;
          }
      }
    }
    return 0;
}

int main(){
    int mo[3][3];
    cout<<"enter the array elements: "<<endl;
    for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cin>>mo[rows][cols];
      }
    }
     for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cout<<mo[rows][cols]<<" ";
      }
      cout<<endl;
    }    
    cout<<"enter the element that you want to find :"<<endl;
    int target;
    cin>>target;
    if(searchElement(mo,3,3,target)){
        cout<<"target is present ";
    }
    else{
         cout<<"target is not present ";
    }

        return 0;
}