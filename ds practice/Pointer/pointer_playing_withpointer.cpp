#include<iostream>
using namespace std;

int main(){
      //playing with pointer

  // int*s;//pointer is created and pointing to some garbage address
 //  int* p=0;
  // cout<<"pointer p is "<<*p<<endl;

   int i=4;
   int*q=&i;
   cout<<" q = "<<q<<endl;
   cout<<"*q="<<*q<<endl;

   int *p=0;
   p=&i;
   cout<<"p = "<<p<<endl;
   cout<<"*p = "<<*p<<endl;

   int num=6;
   int a=num;
   cout<<"a before"<<num<<endl;
   a++;
   cout<<"a after"<<num<<endl;

   int *v=&num;
   cout<<"before "<<num<<endl;
   (*v)++;
   cout<<"after "<<num<<endl;

   //copying pointer
   int* e=v;
   cout<<"v="<<v<<endl;
   cout<<"*v="<<*v<<endl;

   //important concept
   int y=3;
   int *t=&y;
//    cout<<(*t)++ <<endl;

   cout<<"before t ="<<t<<endl;
   t=t+1;
  cout<<"after t ="<<t<<endl;
   
    return 0;
}