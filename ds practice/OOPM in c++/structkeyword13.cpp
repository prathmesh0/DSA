#include<iostream>
using namespace std;
// C++ Struct Example: Using Constructor and Method

struct Rectangle
{
    int length, breadth;

    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    void display(){
        cout<<"area of rectangle : "<<(length*breadth)<<endl;
    }
};
 

int main(){
    struct Rectangle rec = Rectangle(12,10);
    rec.display();
    
    return 0;
}