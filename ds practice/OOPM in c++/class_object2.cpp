#include<iostream>
using namespace std;
// C++ Class Example: Initialize and Display data through method

class Student{
    // data member
    public:
    int id;
    string name;
    // member function
    void insert(int i , string n){
     id = i;
    name =n ;

    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }

};

int main(){
    // creating object
    Student s1;
    Student s2;
    s1.insert(11,"nishad");
    s2.insert(13,"sahil");
    s1.display();
    s2.display();
    return 0;
}