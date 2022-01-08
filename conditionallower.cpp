#include<iostream>
using namespace std;

int main(){
    char c;
       cout<<"enter a character :"<<endl;
    cin>>c;
   ( c>=97 && c<=122 )?cout<<"lowercase":cout<<"not a lowercase";
    return 0;

}