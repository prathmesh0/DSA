#include<iostream>
using namespace std;
//default constructor

class Student{
    public:
    Student(){
        cout<<"Default constructor invoke"<<endl;
    }
};

int main(){
    //crating object
    Student s1;
    Student s2;

    
    return 0;
}