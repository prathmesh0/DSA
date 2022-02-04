#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // Map
    //--> store element in mapped fassion
    //--> maps stores only unique keys

    map<string,int>mpp;
    mpp["raj"]=12;    
    mpp["pop"]=19;    
    mpp["pooja"]=120;    
    mpp["siya"]=123;    
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    cout<<endl;
    mpp.emplace("diggu",34);
    mpp.emplace("pooja",45);
    mpp.emplace("uday",19);
    
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    cout<<"size of map = "<<mpp.size()<<endl;
    cout<<"maximum size of map = "<<mpp.max_size()<<endl;
    cout<<"empty or not ? "<<mpp.empty()<<endl;

     cout<<endl;
    cout<<endl;
    mpp.erase("raj");
    mpp.erase(mpp.begin());
   
      for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

   mpp.clear();
  //another way of printing

   for (auto itr = mpp.begin(); itr != mpp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
   cout<<endl;

  

    //unordered map
    //--> No ordering
    // hash table is used to store element

    unordered_map<string,int>up;
    up.emplace("maharashtra",13);
    up.emplace("gujrat",14);
    up.emplace("hariyana",11);
    up.emplace("chandigadh",177);
    up.emplace("mumbai",1);
    up.insert({"mp",90});
    for(auto it = up.begin();it!=up.end(); it++){
         cout << it->first << " " << it->second ;
         cout<<endl;
    }   
    cout<<endl;
    cout<<endl;

     cout<<"size of u_map = "<<up.size()<<endl;
    cout<<"maximum size of u_map = "<<up.max_size()<<endl;
    cout<<"empty or not ? "<<up.empty()<<endl;
    cout<<" count = "<<up.count("mumbai")<<endl;
    cout<<endl;
    cout<<endl;

    up.erase(up.begin(),up.end());
    for(auto it:up){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    cout<<endl;
    


    //multimap
    //-->multiple element have same key
    //-->store all keys in sorted ordered
    multimap<int,int>tik;
    tik.emplace(12,344); 
    tik.emplace(13,345); 
    tik.emplace(1,3); 
    tik.emplace(62,44); 
    tik.emplace(62,44); 

//printing the multimap
    for(auto it:tik){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    for(auto i=tik.begin(); i!= tik.end();i++){
         cout << i->first << " " << i->second ;
         cout<<endl;
    }
    cout<<endl;
    cout<<endl; 

    cout<<"size of u_map = "<<tik.size()<<endl;
    cout<<"maximum size of u_map = "<<tik.max_size()<<endl;
    cout<<"empty or not ? "<<tik.empty()<<endl;
    cout<<" count = "<<tik.count(62)<<endl;
    tik.erase(tik.begin(),tik.end());
    cout<<endl;
    cout<<endl;
    
     return 0;
}