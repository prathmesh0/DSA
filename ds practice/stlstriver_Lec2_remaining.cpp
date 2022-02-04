#include<iostream>
using namespace std;

int main(){
    //pair
    //initialization
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    //nested pair
    pair<pair<int,int>,int>pr={{1,2},4};
    cout<<pr.first.first<<" "<<pr.first.second<<" "<<pr.second<<endl;
    pair<pair<int,int>,pair<int,int>>co={{3,5},{6,8}};
     cout<<co.first.first<<" "<<co.first.second<<" "<<co.second.second<<endl;

     vector<pair<int,int>>vect;
     set<pair<int,int>>se;
     map<pair<int,int>>mp;

     //stack
     //queue
     //priority_queue
     //deque
    //  list
    return 0;
}