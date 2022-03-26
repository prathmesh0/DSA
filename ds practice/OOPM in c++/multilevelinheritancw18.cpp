#include<iostream>
using namespace std;

class Animal{
    public:
    void eating(){
        cout<<"eating..."<<endl;
    }
};

class Dog : public Animal{
    public :
    void barking(){
            cout<<"barking..."<<endl;
    }
};

class Puppy : public Dog{
    public :
    void wipping(){
            cout<<"wipping..."<<endl;
    }
};



int main(){
    Puppy p1;
    p1.barking();
    p1.eating();
    p1.wipping();
    return 0;
}