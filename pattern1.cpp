#include<iostream>
using namespace std;

int main()
{
    int i,j,rows,cols;
    cout<<"enter rows and columns:";
    cin>>rows>>cols;
    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}