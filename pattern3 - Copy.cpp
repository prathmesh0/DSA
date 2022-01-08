#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int rows;
    cout<<"enter rows :"<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}