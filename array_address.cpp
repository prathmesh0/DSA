#include<iostream>
using namespace std;

int main(){
    int arr[5],i;
    cout<<"size of integer in this compiler is "<<sizeof(int)<<endl;
    for(i=0;i<5;i++){
        cout<<"address of array ["<<i<<" ] is "<<&arr[i]<<endl;
    }
    return 0;
}