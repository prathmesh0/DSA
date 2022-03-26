#include<iostream>
using namespace std;

class A{
    int a=10;
    int b=15;
    public :
    int multi(){
        int c = a * b;
        return c;       
    }
};

class B : private A{
    public:  
    void display()  
    {  
        int result = multi();  
        std::cout <<"Multiplication of a and b is : "<<result<<endl;  
    }  
};

int main(){
     B b1;
     b1.display();
    return 0;
}