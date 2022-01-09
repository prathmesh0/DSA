#include<iostream>
#include<string>
using namespace std;

//problem occure 

int main(){
    string str;
    cout<<"Enter a string :"<<endl;
    getline(cin,str);
    int vowel,consonant,digit,space;
    vowel=consonant=digit=space=0;
   
    int count=0;
    for(int i=0;i<=str.size();i++){
     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' || str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    vowel++;
     }
     else if(str[i]>='a'&&str[i]>='z' || str[i]>='A'&&str[i]>='Z'){
         consonant++;
     }
     else if(str[i]>='0' || str[i]<='9'){
        digit++;
     }
     else if(str[i]==' '){
         space++;
     }
    }
    cout<<"vowel :"<<vowel++<<endl;
    cout<<"consonant :"<<consonant++<<endl;
    cout<<"digit :"<<digit++<<endl;
    cout<<"space :"<<space++<<endl;
    return 0;
}