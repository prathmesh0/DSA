#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,5,6};
    char ch[6]="abcde";

    cout<<arr<<endl;//address of 0th index
    cout<<ch<<endl;

    char *c=&ch[0];
    cout<<c<<endl;//prints entire string

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
    
    return 0;
}