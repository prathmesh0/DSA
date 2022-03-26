#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void printVec( vector<int>vec){
     for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl; 
}

int main(){
    //binary search
    //this stl works only on sorted array or vector
    int arr[4]={2,2,53,1};
    vector<int>vc={12, 33, 4, 6};
    sort(arr, arr+4);
    sort(vc.begin(), vc.end());
    printArray(arr,4);
    printVec(vc);

   // cout<<binary_search(arr,arr+4,1)<<endl;
    //cout<<binary_search(vc.begin(),vc.end(),1)<<endl;

    // lower_bound() function
    //returns an iterator pointing to first element which is not less x
     auto it1= lower_bound(arr,arr+4,3);
     int index1= it1-arr;
     auto it2= lower_bound(vc.begin(),vc.end(),7);
     int index2=it2-vc.begin();
     cout<<"indices are ="<<index1<<" "<<index2<<endl;

     //upper_bound() function
     //returns an iterator pointing to an element which is just greater than x
    auto it3= upper_bound(arr,arr+4,2);
     int index3= it3-arr;
     auto it4= upper_bound(vc.begin(),vc.end(),8);
     int index4=it4-vc.begin();
     cout<<"indices are ="<<index3<<" "<<index4<<endl;

     //Q1--> find me the first index where the element X lies

     //1st way
     array<int,6>p={5,14,22,25,39,40};//-->x=14
     if(binary_search(p.begin(),p.end(),14)==true){
         cout<<lower_bound(p.begin(),p.end(),14)-p.begin();
     }
     else{
         cout<<"does not exit "<<endl;
     }
    //  2nd way
    cout<<endl;
    int indm= lower_bound(p.begin(),p.end(),14)-p.begin();
    if(indm!=6 && p[indm]==14){
        cout<<"found at "<<indm<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }

    //Q2--> last occurence of X--->doubt
    array<int,7>q={5,14,19,19,19,78,87};//-->x=14
    int in= upper_bound(q.begin(),q.end(),14)- q.begin();
    
    if(in>=0 && q[in]==19){
        cout<<"last occurence : "<<in<<endl;
    }
    else{
        cout<<"does not exit "<<endl;
    }
   // Q3-->number of times X appears


   //next permutattions
   string s="bca";
   sort(s.begin(),s.end());
   do{
       cout<<s<<endl;
   }
   while(next_permutation(s.begin(),s.end()));

   //array
   int ary[]={1,6,5};
   sort(ary,ary+3);
   do{
       for(int i=0;i<3;i++)
       cout<<ary[i]<<" ";
       cout<<endl;
   }
   while(next_permutation(ary,ary+3));
   //prev permutation

   bool res=prev_permutation(s.begin(),s.end());
   cout<<res;








    return 0;
}