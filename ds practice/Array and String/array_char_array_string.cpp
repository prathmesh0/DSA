#include<iostream>
using namespace std;

int main(){
    char ch[20];
    cout<<"enter your name :"<<endl;
    cin>>ch;
    cout<<"your name is "<<ch<<endl;
    char name[10];
    cin>>name;
    name[2]='\0';
    cout<<"your name is "<<name<<endl;
    return 0;
}