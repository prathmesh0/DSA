#include<iostream>
using namespace std;

class student{
    //data member
    public:
    int id;
    string name;
};

int main(){
    //create object
    student s1;
    s1.id = 12;
    s1.name = "pop";

    cout << s1.id << endl; 
    cout << s1.name << endl; 
    return 0;
}