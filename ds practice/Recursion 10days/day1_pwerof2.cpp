#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0)
    return 1;

//    recurance relation
    // int smallerproblem= power(n-1);
    // int problem= 2*smallerproblem;
    // return problem;
    return 2 * power(n-1);

}

int main(){
    int n;
    cout<<"enter a power :"<<endl;
    cin>>n;
    int ans= power(n);
    cout<<ans<<endl;
    return 0;
}