#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    array<string,4> color {"black","white","red","blue"};
  
    for (int i = 0; i < color.size(); i++)
    {
     cout<<color[i]<<endl;
    }
    
    
    return 0;
}