#include<iostream>
#include<queue>
using namespace std;
void showq(priority_queue<int>g){
    priority_queue<int>cp=g;
    while (!cp.empty())
    {
        cout<<cp.top()<<" ";
        cp.pop();
    }
    cout<<endl;
}



int main(){
    priority_queue<int>pio;
    pio.push(125);
    pio.push(128);
    pio.push(122);
    pio.push(110);
    showq(pio);

    cout<<"size of priority queue :"<<pio.size()<<endl;
    cout<<"topmost element of priority queue :"<<pio.top()<<endl;

    //pop function
    pio.pop();
     showq(pio);

    cout<<"emplace :"<<endl;
    pio.emplace(120); 
    pio.emplace(13); 
     showq(pio);

//swapping
 priority_queue<int>bio;
    pio.push(1);
    pio.push(18);
    pio.push(12);
    pio.push(10);

    pio.swap(bio);
     showq(pio);
     cout<<endl;
     showq(bio);

    return 0;
}