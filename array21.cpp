#include<iostream>
using namespace std;

int main(){
    int a[50][50],transpose[50][50];
    int arow,acolumns,i,j;
    cout<<"Enter the rows and columns of matrix a:"<<endl;
    cin>>arow>>acolumns;
    cout<<"Enter the elements of matrix a:"<<endl;
    for(i=0;i<arow;i++){
        for(j=0;j<acolumns;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"transpose of matrix:"<<endl;
    for(i=0;i<acolumns;i++){
        for(j=0;j<arow;j++){
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose of matrix:"<<endl;
    return 0;
}