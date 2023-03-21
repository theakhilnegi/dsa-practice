#include <iostream>
using namespace std;

int func(int a[], int n){
    int temp=0,res=0;
    for (int i = 0; i < n-1; i++)
    {
        if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2==1&&a[i+1]%2==1)){
            temp=0;
        }else{
            temp++;
            res=max(res,temp);
        }
    }
    return res+1;
}

int main(){ 
    cout<<"Enter N: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" number: ";
    for (int i = 0; i < n; i++)  
    {
        cin>>a[i];
    }
    cout<<"Array is: ";
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<"Max lenght is: "<<func(a,n);
    return 0;
}