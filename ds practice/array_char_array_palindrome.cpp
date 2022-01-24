#include<iostream>
#include<string>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;

    else{
    char temp= ch -'A'+'a';
    return temp;
    }
}

bool checkPalindrome(string st,int n){
    int s=0,e=n-1;
    while(s<=e){
        if(toLowercase( st[s] )!=toLowercase( st[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
       
    }
       return 1;
    }

int main(){
    string st;
    cout<<"enter string :"<<endl;
    cin>>st;
    int n= st.length();
    bool j= checkPalindrome(st,n);
    if(j){
        cout<<"given string is palindrome "<<endl;
    }
    else{
        cout<<"given string is not palindrome "<<endl;
    }
    return 0;
}