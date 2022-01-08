#include<iostream>
using namespace std;

int main(){
    int r,c, a[100][100],b[100][100],sum[100][100];
    cout<<"Enter the number of rows(1 -100):"<<endl;
    cin>>r;
    cout<<"Enter the number of columns(1 -100):"<<endl;
    cin>>c;
    cout<<"enter the elements of first matrix :"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j= 0; j < c; j++)
        {
            cin>>a[i][j];
        } 
    }
    cout<<"enter the elements of secomd matrix :"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j= 0; j < c; j++)
        {
            cin>>b[i][j];
        }    
    }
   
    for (int i = 0; i < r; i++)
    {
        for (int j= 0; j < c; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    cout<<"the sum of matrices ="<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j= 0; j < c; j++)
        {
           cout<<sum[i][j]<<" ";
           if(j==c-1)
           cout<<endl;
        }    
    }
    return 0;
}
