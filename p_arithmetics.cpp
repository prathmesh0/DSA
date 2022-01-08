#include<iostream>
using namespace std;

int main(){
    int n[3]={10,200,300};
    int *p;
    p=n;
    for (int i = 0; i <= 2; i++)
    {
        cout<<"value of *p is "<<*p<<endl;
        cout<<"value of p is "<<p<<endl;
        
        p++;
    }
    
    return 0;
}
