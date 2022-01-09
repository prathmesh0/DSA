#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //declaration of string
    string str1="prathmesh";
    cout<<str1<<endl;
    //string str(10);
    string str2(5,'N');
     cout<<str2<<endl;
    string str3(str1);
     cout<<str3<<endl;

     //taking input using cin
    //  string name;
    //  cin>>name;
    //  cout<<name<<endl;
    //taking input using getline
    string hobbies;
    getline(cin,hobbies);
    cout<<hobbies;
    return 0;
}