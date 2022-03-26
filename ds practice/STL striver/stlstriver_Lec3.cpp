#include<iostream>
#include<algorithm>
#include<vector>
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
   
   //sorting algorithm
   int arr[10]={12,45,3,6,8,33,3,10,64,8};
  // sort(arr,arr+10);
  printArray(arr ,10);

   //sort from 1 to 3
   sort(arr+1,arr+4);
   printArray(arr ,10);

   vector<int>vec={23,1,66,1,4,6};
   //sort(vec.begin(),vec.end());
   printVec(vec ); 

    //sort it so that only indexes from 1 to 3
    sort(vec.begin()+1,vec.begin()+4);
     printVec(vec); 

     //reverse algorithm
     //reverse(startiterator,enditerator)
     cout<<"reverse "<<endl;
     //reverse(arr,arr+10);
     printArray(arr ,10);
     reverse(arr+1,arr+5); //[)
     printArray(arr ,10);
 
   reverse(vec.begin(),vec.end());
    printVec(vec); 
    // reverse(vec.begin()+2,vec.end()+5);//-->check again
    //  printVec(vec); 

    //maximum and minimum element in arr and vec
    int m = *max_element(arr,arr+10);
    int n = *min_element(arr,arr+10);
    cout<<"max="<<m<<" "<<"min="<<n<<endl;

     int v = *max_element(vec.begin(),vec.end());
    int t = *min_element(vec.begin(),vec.end());
    cout<<"max="<<v<<" "<<"min="<<t<<endl;

    //sum of array element and vector element
    //sum in given range
     //int suma = accumulate(arr, arr+10, 0); --->error throw
    //  int sumv=  accumulate(vec.begin(), vec.begin(), 0);
    //  cout<<"sum of array element ="<<suma<<" "<<"sum of all vector element ="<<sumv<<endl;


    //how many times the element is occure
   /* int cnt=0;
    int x;
    cout<<x;
    for(int i =0;i<10;i++){
        if(arr[i]==x)
        cnt++;
        }
        return cnt;
        }
         }  */

        int cta=count(arr,arr+10,8);
        int ctv=count(vec.begin(),vec.end(),1);
        cout<<"count="<<cta<<" "<<"count="<<ctv<<endl;

        //first occurance
         /* int ind=-1;
        int x;
        cout<<x;
         for(int i =0;i<10;i++){
        if(arr[i]==x)
        ind=i;
        break;
        }
       
        cout<<ind;
        } 
        */
       auto it= find(arr,arr+10,8);//returns an iterator
       //pointing to first instance of it or else it
        //pointing to  the end()if it is not there
        int indxa=it-arr; 
        auto i= find(vec.begin(),vec.end(),90);
        int indxv=i-vec.begin(); 
         cout<<"1st occ of array ="<<indxa<<" "<<"1st occ of vector ="<<indxv<<endl;

         //element is present or not
         if(i==vec.end()){
             cout<<"element is not present "<<endl;
         }
         else
        cout<<"element is present "<<endl;          

        
          return 0;
}