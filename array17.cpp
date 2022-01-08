#include<iostream>
#include<cmath>
using namespace std;
float dev(int arr[],int n){
float sum=0.0,mean,sd=0.0;
int i;
for ( i = 0; i <n ; i++)
{
   sum=sum+arr[i];
}
mean=sum/n;
for ( i = 0; i < n; i++)
{
    sd+=pow(arr[i]-mean,2);
}
return sqrt(sd/n);

}

int main(){
    int n,arr[n];
    cout<<"enter the no. of the element :"<<endl;
    cin>>n;
    cout<<"enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float result=dev(arr,n);
    cout<<"SD ="<<result;

    return 0;
}