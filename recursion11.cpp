#include<iostream>
//error occure
using namespace std;

void getSubsequence(string str, int index,  string output){
  //base condition
  if(index=str.length())
  cout<<output<<endl;
  return;
  //exclude
  getSubsequence(str,index+1,output);
  //include
  output.push_back(str[index]);
  getSubsequence(str,index+1,output);

}
int main(){
    string str;
    cout<<"enter the String :";
    cin>>str;
    
    cout<<"printing all subsequences :"<<endl;
    string output="";
    getSubsequence(str,0,output);

    return 0;
}