#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int rows;
    cout<<"enter rows :"<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
         char alphabet='a';
        for(j=1;j<=i;j++){
          cout<<alphabet++;
            
        }
        cout<<endl;
    }
}