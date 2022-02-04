#include<iostream>
#include<set>
#include <unordered_set>


using namespace std;

int main(){
    //unique element --> set
    // declaratio
    set<int>st;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }

//printing set element in various method
    for(auto it=st.begin(); it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto i:st){
        cout<<i<<" ";
    }
     cout<<endl;
     cout<<st.size();
    cout<<endl;

     
     set<int>p;
     p.insert(56);
     p.insert(23);
     p.insert(5);
     p.emplace(5);
     p.emplace(15);
      //erase
    p.erase(56);  //all the instances will be erased
     for(auto i:p){
        cout<<i<<" ";
    }
     cout<<endl;

    p.erase(p.begin());
     for(auto i:p){
        cout<<i<<" ";
    }
     cout<<endl;
    
    p.erase(p.begin(),p.end());
      for(auto i:p){
        cout<<i<<" ";
    }
     cout<<endl;
    
    //find functionality in set
    set<int>sot={1,4,57,2,2};
 for(auto i:sot){
        cout<<i<<" ";
    }
    cout<<endl;
   
   auto it=sot.find(4);
   cout<<"iterator = "<<*it<<endl;
   cout<<sot.size()<<endl;


   //unordered set
   //->store unique element in any order
   //->TC=O(1) & O(n) in worst cases

   unordered_set<int>us;
   us.insert(12); 
   us.insert(17); 
   us.insert(10); 
 
   for(auto i:us){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto it=us.begin(); it!=us.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"size= "<<us.size();
    cout<<endl;
    cout<<" maximum size= "<<us.max_size();
    cout<<endl;
    if(us.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<" Not Empty"<<endl;
    }
    us.emplace(67);
    us.emplace(90);
    for(auto it:us){
        cout<<it<<" ";
    }
    cout<<endl;

  //erase function
  us.erase(67);
  us.erase(us.begin());
   for(auto it:us){
        cout<<it<<" ";
    }
    cout<<endl;

    us.erase(us.begin(),us.end());
  
    cout<<endl;
  

   //multi_set
   //-->it store multiple elements having same values
   //-->store in sorted fassion
   multiset<int>ms;
   ms.insert(12);
   ms.insert(10);
   ms.insert(16);
   ms.insert(16);
   ms.insert(10);

   for(auto i:ms){
       cout<<i<<" ";
   }
   cout<<endl;
   
   cout<<"size = "<<ms.size()<<endl;
   cout<<" maximum_size = "<<ms.max_size()<<endl;
   cout<<"count of 10 ="<<ms.count(10)<<endl;
   ms.clear();

   if(ms.empty()){
       cout<<"Empty"<<endl;
   }
   else{
       cout<<"not empty"<<endl;
   }

   ms.emplace(999000);
   ms.emplace(9990);
   ms.emplace(99900);
   for(auto i:ms){
       cout<<i<<" ";
   }
   cout<<endl;

    return 0;

}