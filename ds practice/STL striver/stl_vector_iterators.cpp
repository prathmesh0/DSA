#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>tan;
   for(int i=1;i<=5;i++){
       tan.push_back(i);
   }
 
 cout<<"output of bigin and end "<<endl;
 for(auto i=tan.begin(); i!=tan.end(); ++i)
     cout << *i << " ";
    cout<<endl;
        
     cout<<"output of reverse bigin and reverse end "<<endl;
 for(auto ir=tan.rbegin(); ir!=tan.rend(); ++ir)
     cout << *ir << " ";
    cout<<endl;

    cout<<"output of  constant bigin and constant end "<<endl;
 for(auto ic=tan.cbegin(); ic!=tan.cend(); ++ic)
     cout << *ic << " ";
    cout<<endl;
               
    cout<<"output of constant and reverse bigin and constant and reverse end "<<endl;
 for(auto icr=tan.crbegin(); icr!=tan.crend(); ++icr)
     cout << *icr << " ";
    cout<<endl;
                   
    
    return 0;
}