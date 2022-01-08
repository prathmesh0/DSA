#include<iostream>
using namespace std;

inline int cube(int s){
    return(s*s*s);
}
int main(){
    int n;
    cin>>n;
    cout<<"The cube of "<<n<<" is "<<cube(n);
        return 0;
}