#include<iostream>
#include<deque>
using namespace std;

void showdq(deque<int>k){
    deque<int>::iterator it;
    for(it=k.begin();it!=k.end();++it){
        cout<<"\t"<<*it;
    }
    cout<<endl;
}

int main(){
    deque<int>p={12,33,4,55,66};
    deque<int>q={1,2,3,4,5};
    p.swap(q);
    showdq(p);
    showdq(q);

//operator
deque<int>x;
  x=p;
  showdq(q);

  for(int i=0; i<q.size();i++){
      cout<<q[i]<<" ";
  }
  cout<<endl;

  //assign
  p.assign(5,10);
   showdq(p);

   //emplCE
   p.emplace_front(20);
   p.emplace_back(20);
   showdq(p);
    return 0;
}