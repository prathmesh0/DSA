#include<iostream>
using namespace std;

void update(int **p2){
  //  p2=p2+1;//no change 
  

  //*p2 = *p2+1; //--->change occure

 // **p2 = **p2+1;  //--->change occure

}




int main(){
    int val=5;
    int *ptr=&val;
    int **ptr2=&ptr;

//printing value val 
    cout<<val<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    //printing address of val
    cout<<&val<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;

    //printing address of ptr
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

    cout<<endl<<endl;
    cout<<"before = "<<val<<endl;
    cout<<"before = "<<ptr<<endl;
    cout<<"before = "<<ptr2<<endl;
    update(ptr2);
    cout<<"after = "<<val<<endl;
    cout<<"after = "<<ptr<<endl;
    cout<<"after = "<<ptr2<<endl;
    
   

    return 0;
}