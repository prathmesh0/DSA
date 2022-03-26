#include<iostream>
using namespace std;

struct Rectangle
{
    int length, breadth;
};
 

int main(){
    struct Rectangle rec;
    rec.length=12;
    rec.breadth=2;
    cout<<"Area of rectangle : "<<(rec.length * rec.breadth)<<endl; 
    return 0;
}