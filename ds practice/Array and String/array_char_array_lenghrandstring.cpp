#include<iostream>
using namespace std;

int getLenght(char n[]){
    int count =0;
    for(int i=0; n[i]!='\0';i++){
        count++;
    }
    return count;
}

void getReverse(char rev[],int m){
    int s=0;
    int e=m-1;
    while(s<e){
        swap(rev[s++],rev[e--]);
    }
}

int main(){
    char name[30];
    cout<<"enter your name :"<<endl;
    cin>>name;
    cout<<"My name is "<<name<<endl;
    int m = getLenght(name);
    cout<<"Lenght of string = "<<m<<endl;
    cout<<" reverse = ";
    getReverse(name,m);
    cout<<name;
    return 0;
}