#include<iostream>
using namespace std;
int no_of_way(int n){
    if(n<0)
    return 0;

      if(n==0)
    return 1;


    return no_of_way(n-1)+no_of_way(n-2)+no_of_way(n-3);

}

int main(){
    int n,ans;
    cout<<"entet a number :";
    cin>>n;
     ans= no_of_way(n);
    cout<<"total number of ways are :"<<ans<<endl;
    return 0;
}