#include<iostream>
using namespace std;

int main()
{
    int i,j,space;
    int rows;
    cout<<"enter rows :"<<endl;
    cin>>rows;
    for(i=rows;i>=1;i--){
        for(space=1;space<=(rows-i);space++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}