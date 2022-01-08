#include<iostream>
using namespace std;


int main(){
    
    int n, arr[n],i;
    cout<<"enter the number of element in  array:"<<endl;
    cin>>n;
    cout<<"enter  array elements :"<<endl;
   
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
     int sum=0;
     int product=1;
     for (int i = 0; i < n; i++)
     {
      sum=sum+arr[i];
      product=product*arr[i];

     }
     cout<<sum<<endl;
     cout<<product<<endl;
     
}
