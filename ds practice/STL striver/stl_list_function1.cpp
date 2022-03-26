#include<iostream>
#include<list>
using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << "\t" << *it;
    cout << "\t";
    cout<<endl;
}

bool even(const int& value) {
     return (value % 2) == 0;
      }

int main(){
    list<int>p1={12,34,55,66,77};
    //p1.clear();// to remove all the elements in list 
    if(p1.empty()){
        cout<<"list is empty "<<endl;
    }
    else
    cout<<"list is not empty "<<endl;

    //insert new element??
   //erase element?
   //duplicate??
   //emplace??
   showlist(p1);
  
  p1.remove(12);//remove all particular element
  showlist(p1);

   p1.remove_if(even);// remove_if()
   showlist(p1);
   
   p1.push_back(13);
   p1.push_back(18);
   p1.push_back(11);
   showlist(p1);

   p1.reverse();//reverse
   showlist(p1);

   cout<<"no.of element in the list is "<<p1.size()<<endl;

   p1.sort();//sort all element in list  
    showlist(p1);

    p1.push_front(12);
    p1.push_front(13);
    p1.push_front(11);
    showlist(p1);

list<int>ni={1,3,4,5};
list<int>pi={6,7,8,9};
cout<<"swapping two list: "<<endl;
ni.swap(pi);
 showlist(ni);
 showlist(pi);

 cout<<"merge two list: "<<endl;
 ni.merge(pi);
 showlist(ni);
    return 0;
}