#include<iostream>
using namespace std;
//parameterized

class Student{
    public:

    int rollno;
    string name;
    char gender;
    Student(int i, string n, char g ){
        rollno=i;
        name=n;
        gender=g;
    }
    void display(){
        cout<<rollno<<" "<<name<<" "<<gender<<endl;
    }

};

int main(){
    //creating object
    Student s1= Student(1, "gotya", 'm');
    Student s2= Student(8, "pradnya", 'f');
    s1.display();
    s2.display();
    return 0;
}