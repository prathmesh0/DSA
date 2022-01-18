#include<iostream>
#include<vector>
using namespace std;

void val(vector<int>&top){
    top.push_back(30);
}

int main(){
    vector<int>pop;
    pop.push_back(122);
    pop.push_back(12);
    pop.push_back(10);
    val(pop);  //pass by reference
    // The top is passed by reference and changes
// made here reflect in main()
     
    for (int i = 0; i < pop.size(); i++)
    {
        cout<<pop[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}