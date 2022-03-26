#include<iostream>
using namespace std;
class Animal{
    public:
    void eating(){
        cout<<"eating..."<<endl;
    }
};

class Dog : public Animal{
    public:
    void barking(){
        cout<<"barking..."<<endl;
    }
};


int main(){
    Dog d1;
    d1.barking();
    d1.eating();
    return 0;
}