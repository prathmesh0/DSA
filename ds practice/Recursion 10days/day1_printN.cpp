#include<iostream>
using namespace std;
//--->tail recursion
void printNum(int n){
    //base condition
    if(n==0)
    return ;
    //printing n=5 -->5,4,3,2,1
    cout<<n<<" "; //processing for printing
   printNum(n-1);//RR
}

int main(){
    int num;
    cin>>num;
    printNum(num);

    return 0;
}