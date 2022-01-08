//program is not run
#include<iostream>
using namespace std;

int main(){
    int n,arr[n];
    cout<<"enter the no. of element in array:"<<endl;
    cin>>n;
    cout<<"enter array element :"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int sum=0; 
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int product=1;
       for (int i = 0; i < n; i++)
    {
        product=product*arr[i];
    }
     int largest=arr[0];
       for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
     int smallest=arr[0];
       for (int i = 0; i < n; i++)
    {
       if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"sum of elements :"<<sum<<endl;
    cout<<"product of element :"<<product<<endl;
    cout<<"largest element :"<<largest<<endl;
    cout<<"smallest element :"<<smallest<<endl;

    return 0;
}