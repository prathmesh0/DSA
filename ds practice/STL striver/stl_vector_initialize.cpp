#include<iostream>
#include<vector>

using namespace std;

int main(){
    //by pushing values one by one
    vector<int>p;
    p.push_back(12);
    p.push_back(14);
    p.push_back(10);
    for(int x:p)
    cout<<x<<" ";
    cout<<endl;

    //specifying size and initializing all values
    int n=3;
    vector<int>pop(n,10);
    for(int y:pop)
    cout<<y<<" ";
    cout<<endl;

   //initializing like array
   vector<char>mom{'s','h','e','e','t','a','l'};
   for(char x:mom)
   cout<<x<<" ";
   cout<<endl;

   //initializing from an array
   int arr[]={122,34,66};
   int a=sizeof(arr)/sizeof(int);
   vector<int>ari(arr, arr+n);
   for(int x:ari)
   cout<<x<<" ";
   cout<<endl;

   //initializing from another vector
   vector<float>vect1{19.2,23.3,5.0};
   vector<float>vect2(vect1.begin(),vect1.end());

   for(float d:vect2)
   cout<<d<<" ";
   cout<<endl;

   //all elements with particular values
   vector<int>opps(10);
   int values=5;
   fill(opps.begin(),opps.end(),values);

   for(int e:opps)
   cout<<e<<" ";
   cout<<endl;

        return 0;
}