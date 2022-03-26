#include<iostream>
using namespace std;

class Hero{
    //properties
    char name[100];
    int health;
    char level;
};


int main(){
    //create object 
    Hero ramesh;
    cout<<"health is :"<<ramesh.health<<endl;
    cout<<"level is :"<<ramesh.level<<endl;
   // cout<<"size : "<<sizeof(h1)<<endl;
    return 0;
}