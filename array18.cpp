#include<iostream>
using namespace std;

int main(){
    int data[5];
    cout<<"enter 5 numbers :"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin>>data[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<data[i]<<endl;
    }
        
    return 0;
}