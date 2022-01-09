#include<iostream>
using namespace std;

int main(){
    char c;
    //bool islvowel,isuvowel;

    cout<<"enter a character:"<<endl;
    cin>>c;
   // islvowel=(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u');//Lowercase vowel
    //islvowel=(c=='A' || c=='E' || c=='I' ||c=='O' ||c=='U');//Uppercase vowel
    if(c==(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u')||(c=='A' || c=='E' || c=='I' ||c=='O' ||c=='U')){
        cout<< "  vowel."<<endl;
    }
    else{
        cout<< "consonant."<<endl;
    }
    return 0;
}