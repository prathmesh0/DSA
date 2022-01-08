#include<iostream>
using namespace std;

int main(){
    const char *color[4]={"black","white","red","blue"};
    for(int i=0;i<4;i++){
        cout<<color[i];
        cout<<endl;
    }

    return 0;
}