#include<iostream>
using namespace std;

int main(){
    int mo[3][3];
    cout<<"enter the array elements: "<<endl;
    for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cin>>mo[rows][cols];
      }
    }
    //printing rowwise
     for (int rows = 0; rows < 3; rows++)
    {
      for(int cols=0; cols < 3; cols++){
          cout<<mo[rows][cols]<<" ";
      }
      cout<<endl;
    }    

    //columnwise
     for (int cols = 0; cols < 3; cols++)
    {
      for(int rows=0; rows < 3; rows++){
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

    return 0;
}