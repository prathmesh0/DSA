#include<iostream>
using namespace std;

class Employee{
    public:
    Employee(){ //---->constructor
        cout<<"constructor invoke"<<endl;
    }

    ~Employee(){//---->destructor
        cout<<"destructor invoke"<<endl;
    }
    
};

int main(){
    Employee e1;
    Employee e2;
    return 0;
}