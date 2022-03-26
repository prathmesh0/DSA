#include<iostream>
#include<array>
#include<vector>
using namespace std;


int main(){
    //array 
    array<int,3>arr1;//-->{?,?,?}
    array<int,5>arr2={1};//-->{1,0,0,0,0}    
   
      for(auto it= arr2.begin(); it!=arr2.end();it++){
        cout<<*it<<" ";
        }
        cout<<endl;

        arr1.fill(10);//fill function
     for(auto it= arr1.begin(); it!=arr1.end();it++){
        cout<<*it<<" ";
        }
        cout<<endl;

        array<int,5>arr3={1,3,5,6,7};
        //various type to print array element
        //rbegin(),rend(),end(),begin() function
    for(auto it= arr3.begin(); it!=arr3.end();it++){
        cout<<*it<<" ";
        }
        cout<<endl;
    for(auto it= arr3.begin(); it!=arr3.end();it++){
        cout<<*it<<" ";
        }
        cout<<endl;

        for(auto it= arr3.rbegin(); it!=arr3.rend();it++){
        cout<<*it<<" ";
        }
        cout<<endl;

        for(auto it= arr3.end()-1; it>=arr3.begin();it--){
        cout<<*it<<" ";
        }
        cout<<endl;

    for(auto it: arr3){
        cout<<it<<" ";
    }
    cout<<endl;

    string s="mangesh";
     for(auto it: s){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<arr3.size()<<endl;//size
    cout<<arr3.front()<<endl;//front
    cout<<arr3.back()<<endl;//back
cout<<endl;
cout<<endl;
cout<<endl;


    //vector
    vector<int>v; //--> {} empty vector
    cout<<v.size()<<endl;
    v.push_back(2);
    v.push_back(3);
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<v.size()<<endl;
    v.clear();//erase all elements at once {}

    //initialisation
    vector<int>vec1(4,0); //-> {0,0,0,0}
    vector<int>vec2(4,10); //->{10,10,10,10}
    vector<int>vec3(vec2);  //copy entire vec2 into vec3
    for(auto it: vec3){
        cout<<it<<" ";
    }
    cout<<endl;
        
    vector<int>man;
    man.emplace_back(3);//emplace back takes lesser time than push_back
    man.emplace_back(2);
    man.emplace_back(1);
    man.emplace_back(0);
      for(auto it: man){
        cout<<it<<" ";
    }
    cout<<endl;    

    vector<int>wom(man.begin(),man.begin()+3);   //[)
     for(auto it: wom){
        cout<<it<<" ";
    }
    cout<<endl; 
    cout<<endl; 

    //defining 2d vectors
    vector<vector<int>>mon;
    vector<int>raj1;
    raj1.push_back(10);
    raj1.push_back(20);

    vector<int>raj2;
    raj2.push_back(100);
    raj2.push_back(200);

     vector<int>raj3;
    raj3.push_back(1000);
    raj3.push_back(2000);
    raj3.push_back(3000);

    mon.push_back(raj1);
    mon.push_back(raj2);
    mon.push_back(raj3);

    for(auto vctr:mon){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < mon.size(); i++)
    {
        for (int j = 0; j < mon[i].size(); j++)
        {
           cout<<mon[i][j]<<" ";
        }
        cout<<endl;
        
    }

    //defined 10*20 (2D)
    vector<vector<int>>shadow(10,vector<int>(20,0));
    //array in vector
    vector<int>arr[4];
    //defined 10*20*30(3D)..check again
    //vector<vector<vector<int>>>vec(10,vector<vector<int>> vec(20,vector<int>(30,0)));
    

    return 0;
}