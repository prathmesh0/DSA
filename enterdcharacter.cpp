#include<iostream>
using namespace std;

int main()
{
   char c;
   cout<<"enter the character :"<<endl;
   cin>>c;
  
    if(c>=65 && c<=90)
        cout<<"capital letter"<<endl; 
    else if(c>=97 && c<=122)
         cout<<"small case letter"<<endl;
    else if(c>=48 && c<=57)
         cout<<"number"<<endl;
     else
         cout<<"special symbol"<<endl;
     return 0;
}