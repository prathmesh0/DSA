#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector< int >s;
    for(int i=1; i<=10; i++)
    s.push_back(i*10);

    cout<<"reference operator = "<<s[2]<<endl;
    cout<<"at() operator = "<<s.at(4)<<endl;
    cout<<"front() operator = "<<s.front()<<endl;
    cout<<"back() operator = "<<s.back()<<endl;

    // pointer to the first element
    int* pos = s.data();
    cout << "\nThe first element is " << *pos;
    return 0;
}