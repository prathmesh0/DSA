#include<iostream>
using namespace std;

int main(){
    int neg=0,pos=0,zero=0,n,i;
  
    cout<<"How many no.do you want to entered:"<<endl;
     cin>>n;
     int arr[n];
    cout<<"enter a number"<<endl;
    for ( i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
   if(arr[i]<0){
       neg++;
   }
   else if(arr[i]>0){
       pos++;
   }
  else{
       zero++;
   }
    }
    cout<<"positive no ="<<pos++<<endl;
    cout<<"negative no ="<<neg++<<endl;
    cout<<"zeros  ="<<zero++<<endl;
    return 0;

}