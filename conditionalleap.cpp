#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter year :"<<endl;
    cin>>year;
   (year%400==0|| year%100!=0 && year%4==0)?cout<<"leap year":cout<<"not leap year";
    return 0;

}