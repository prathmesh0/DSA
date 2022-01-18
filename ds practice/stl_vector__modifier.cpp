#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.assign(5,10);//fill the vector with 10 five times
    
    cout<<"The elements are:"<<endl;
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" "<<endl;

    v.insert(v.begin(),5);//insert 5 at begin
    cout<<"the element is at first "<<v[0]<<endl;

    //remove element
    v.erase(v.begin());
    cout<<"the first element "<<v[0]<<endl;

   //insert at end
   v.emplace_back(20);
   int n=v.size();
   cout<<"the last element is :"<<v[n-1]<<endl;

   //erase the vector
   v.clear();
   cout<<"vector size after erase:"<<v.size()<<endl;

   
    return 0;
}