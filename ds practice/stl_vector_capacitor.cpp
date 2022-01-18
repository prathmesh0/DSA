#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>p1;
    for(int i=1;i<=5;i++)
    p1.push_back(i);

    cout<<"size(no.of elements in vector):"<<p1.size()<<endl;
    cout<<"maximum size(maximum no.of elements that the vector can hold):"<<p1.max_size()<<endl;
    cout<<"capacity(current size of storage space):"<<p1.capacity()<<endl;

    p1.resize(4);
     cout<<"size(no.of elements in vector):"<<p1.size()<<endl;
     cout<<"vector is empty or not ? "<<p1.empty()<<endl;

     p1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = p1.begin(); it != p1.end(); it++)
        cout << *it << " ";
  
    
    return 0;
}