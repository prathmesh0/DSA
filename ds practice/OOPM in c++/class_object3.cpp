#include<iostream>
using namespace std;
// C++ Class Example: Store and Display Employee Information

class Employee{
    public:
    //data member
    int id;
    string name;
    float salary;
    //member function
    void insert(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }
    
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<" "<<endl;
    }
};

int main(){
    //creating an object
    Employee p1;
    Employee p2;
    Employee p3;

    p1.insert(12, "rohit", 123.4);
    p2.insert(13, "shyam", 12.409);
    p3.insert(134, "ram", 199.4);
    
    p1.display();
    p2.display();
    p3.display();
    return 0;
}