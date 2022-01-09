#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string :"<<endl;
    getline(cin,str);
    char CheckCharacter;
    cout<<"enter character:"<<endl;
    cin>>CheckCharacter;
    int count=0;
    for(int i=0;i<=str.size();i++){
        if(str[i]==CheckCharacter){
            count++;
        }
    }
    cout<<"the number of time "<< CheckCharacter<< " occure is "<<count++<<endl;
    return 0;
}