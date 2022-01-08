#include<iostream>
using namespace std;
// calculator in c++


int main(){
    cout<<"1. sweet chili"<<endl;
    cout<<"2. chicken"<<endl  ;
    cout<<"3. drinks"<<endl;
    int num;
    cout<<"chosee option given above(1,2,3) :"<<endl;
    cin>>num;
    
    switch (num)
    {
        case 1 :
        cout<<"chili rice"<<endl;
        cout<<"chili makkhan"<<endl;
        break;

        case 2 :
        cout<<"chicken tikka"<<endl;
        cout<<"biryani"<<endl;
        break;
        
        case 3:
        cout<<"wine"<<endl;
        cout<<"lemon juice"<<endl;
        break;
   
   
    
    default:
        cout<<"you enterd wrong option"<<endl;
        break;
    }
 
   
    return 0;

}