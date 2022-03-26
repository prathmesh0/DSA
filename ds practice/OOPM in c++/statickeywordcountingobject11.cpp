#include<iostream>
using namespace std;
// C++ static field / function example

class Account{
    
    public:
    // data member
    int accno;
    string name;
    static float count;

    Account(int accno, string name){
        this->accno = accno;
        this->name = name;
        count++;
    }

    void display(){
        cout<<accno<<" "<<name<<endl;
    }
};

float Account :: count = 0;

int main(){
    //object crating
    Account a1 = Account(1222,"hema"); 
    Account a2 = Account(1342,"sita");
    Account a3 = Account(513,"riya");
    Account a4 = Account(42,"harsh");
    a1.display();
    a2.display(); 
    a3.display(); 
    a4.display(); 
    cout<<"total number of object : "<<Account::count;
    return 0;
}