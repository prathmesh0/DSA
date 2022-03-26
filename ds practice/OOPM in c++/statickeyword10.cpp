#include<iostream>
using namespace std;
// C++ static field / function example

class Account{
    
    public:
    // data member
    int accno;
    string name;
    static float rateOfinterest;

    Account(int accno, string name){
        this->accno = accno;
        this->name = name;
    }

    void display(){
        cout<<accno<<" "<<name<<" "<<rateOfinterest<<endl;
    }
};

float Account :: rateOfinterest=2.3;

int main(){
    //object crating
    Account a1 = Account(1222,"hema"); 
    Account a2 = Account(1342,"sita");
    a1.display();
    a2.display(); 
    return 0;
}