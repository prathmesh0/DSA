#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char alphabet='a';
    int rows;
    cout<<"enter rows :"<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
          cout<<alphabet;    
        }
        alphabet++;
        cout<<endl;
    }
}