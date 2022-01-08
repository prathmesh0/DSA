#include<iostream>
using namespace std;
void p_array(){
    int arr[3]={12,23,34};
    int *p;
    p=&arr[0];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"value of *p ="<<*p<<endl;
    //     cout<<"value of *p ="<<p<<endl;
    //     p++;
    // }
    cout<<"element of array :"<<endl;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}

int main(){
    p_array();
    return 0;
}