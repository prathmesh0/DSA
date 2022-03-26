#include<iostream>
using namespace std;

enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){
    week day;
    day=Friday;
    cout<<"day : "<<day+1<<endl;
    return 0;
}