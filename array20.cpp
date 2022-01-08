#include<iostream>
using namespace std;

int main(){
    int a[50][50], b[50][50], product[50][50];
    int arow,acolumns,brow,bcolumns,i,j,k,sum=0;
    cout<<"Enter the rows and columns of matrix a:"<<endl;
    cin>>arow>>acolumns;
    cout<<"Enter the elements of matrix a:"<<endl;
    for(i=0;i<arow;i++){
        for(j=0;j<acolumns;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the rows and columns of matrix b:"<<endl;
    cin>>brow>>bcolumns;
   


if(brow!=acolumns){
    cout<<"Sorry we cannot multiply the matrix."<<endl;
}
else{
     cout<<"Enter the elements of matrix b:"<<endl;
    for(i=0;i<brow;i++){
        for(j=0;j<bcolumns;j++){
            cin>>b[i][j];
        }
    }
}

    cout<<endl;

    for(i=0;i<arow;i++){
        for(j=0;j<bcolumns;j++){
            for(k=0;k<brow;k++){
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    cout<<"resultant matrix:"<<endl;
    for(i=0;i<arow;i++){
        for(j=0;j<bcolumns;j++){
            cout<<product[i][j]<<" ";

        }
        cout<<endl;
    }
    

    return 0;
}