#include<iostream>
using namespace std;
//--->head recursion
void printNum(int n){
    //base condition
    if(n==0)
    return ;
    //printing n=5 -->1,2,3,4,5
     printNum(n-1);//RR
    cout<<n<<" "; //processing for printing
}

int main(){
    int num;
    cin>>num;
    printNum(num);

    return 0;
}