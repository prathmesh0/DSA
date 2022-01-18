#include<iostream>
#include<list>
using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << "\t" << *it;
    cout << "\t";
}
 

int main(){
    list<int>l1;
  for(int i=1;i<=5;i++){
      l1.push_back(i);
  }
  showlist(l1);
    cout<<endl;
    cout<<"value of 1st element in the list  "<<l1.front()<<endl;
    cout<<"value of last element in the list  "<<l1.back()<<endl;
    //cout<<"add nesw element at beginning "<<l1.push_front(3)<<endl;
    cout<<"remove 1st element at beginning "<<l1.pop_front()<<endl;
    
  


    return 0; 
}