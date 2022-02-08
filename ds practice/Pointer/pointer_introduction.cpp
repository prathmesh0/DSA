#include<iostream>
using namespace std;

int main(){
    
    int num =5;
    cout<<num<<endl;
    //&-address of operator
    cout<<"address of num = "<<&num<<endl; //hexadecimal number
    int* ptr=&num;
    cout<<"address of num ="<<ptr<<endl;
    cout<<"value of num = "<<*ptr<<endl;

    double d=23.44;
    double* ptr2=&d;
     cout<<"address of d ="<<ptr2<<endl;
    cout<<"value of d = "<<*ptr2<<endl;

    //sizeof operator
    cout<<"size of integer =  "<<sizeof(num)<<endl;
    cout<<"size of pointer =  "<<sizeof(ptr)<<endl;
    cout<<"size of double pointer  =  "<<sizeof(ptr2)<<endl;

   

 

    return 0;
}