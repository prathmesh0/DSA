#include<iostream>
using namespace std;

int main(){
    int n,i;
  
    cout<<"enter a number"<<endl;
    cin>>n;
    for ( i = 2; i <= n-1; i++)
    if(n%i==0)
    break;
   if(i==n)
   cout<<n<<" is prime no.";
   else
   cout<<n<<"  is not a prime no.";
    return 0;

}