#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string>color {"black","white","red","blue"};
     // Strings can be added at any time with push_back
    color.push_back("Yellow");
    for (int i = 0; i < color.size(); i++)
    {
     cout<<color[i]<<endl;
    }
    
    
    return 0;
}