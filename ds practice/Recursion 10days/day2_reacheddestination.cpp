#include<iostream>
using namespace std;

void  reacheddestination(int s,int d){

    cout << "source " << s  << " destination " << d << endl;

    //base case
    if(s==d){
    cout<<"reached at destination -->"<<endl;
    return ;
    }

    //processing--->increased source by 1
    s++;

    //RR
    reacheddestination(s,d);


}

int main(){
    int source=1,dest=10;
    cout<<endl;
    reacheddestination(source,dest);
    return 0;
}