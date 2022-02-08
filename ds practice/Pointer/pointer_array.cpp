#include<iostream>
using namespace std;

int main(){

    int arr[10]={12,334,56,7};
    cout<<"address of 1st memeory  block is "<<arr<<endl;
    cout<<"address of 1st memeory  block is "<<&arr[0]<<endl;
    cout<<"value of 1st memeory  block is "<<arr[0]<<endl;
    cout<<"value of 1st memeory  block is "<<*arr<<endl;
    cout<<*arr+1<<endl;//12+1=13
    cout<<*(arr+1)<<endl;//334
    cout<<arr[2]<<endl;//56
    cout<<*(arr+2)<<endl;//56
   
  int i=3;
  cout<<i[arr]<<endl;// same as arr[i]
    

   int temp[10]={1,2};
   cout<<"size of temp = "<<sizeof(temp)<<endl;//40
   cout<<sizeof(*temp)<<endl;//4
   cout<<sizeof(&temp)<<endl;//4

   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;//4
   cout<<sizeof(*ptr)<<endl;//4
   cout<<sizeof(&ptr)<<endl;//4
  

  int a[20]={12,2,4,56,7};
  cout<<&a[0]<<endl;
  cout<<&a<<endl;
  cout<<a<<endl;

  int *p=&a[0];
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<*p<<endl;


  int arr[10];
  //error
  //arr=arr+1;
  int *ptr=&arr[0];
  cout<<ptr<<endl;
  ptr=ptr+1;
  cout<<ptr<<endl;



    return 0;
}