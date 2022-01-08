#include<iostream>
using namespace std;

int main(){
    
    int n, arr[5],i;
    int pos=0,neg=0,zero=0,even=0,odd=0;
    cout<<"enter 5 numbers :"<<endl;
   
    for ( i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
    if(arr[i]>0){
        pos++;
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    else if(arr[i]<0)
    neg++;
    else{
        zero++;
        even++;
    }
    }
   cout<<"positive numbers = "<<pos++<<endl;
   cout<<"negative numbers = "<<neg++<<endl;
   cout<<"even numbers = "<<even++<<endl;
   cout<<"odd numbers = "<<odd++<<endl;
   cout<<"zero numbers = "<<zero++<<endl;
    
    return 0;
}