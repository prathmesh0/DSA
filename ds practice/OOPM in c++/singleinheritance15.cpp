#include<iostream>
using namespace std;

class Account{
    public:
    float salary = 60000;
};

class Programmer : public Account{
    public:
    float bonus = 10000;
};

int main(){
    Programmer p1;
    cout<<"salary : "<<p1.salary<<endl;
    cout<<"bonus : "<<p1.bonus<<endl;
    return 0;
}