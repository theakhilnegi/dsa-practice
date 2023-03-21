#include <iostream>
using namespace std;

//Naive method
int funcN(int a[], int n){
    int peak;
    if(n==1){
        cout<<a[0];
        return 0;
    }
    if(a[1]<a[0]){
        peak=a[0];
        cout<<peak<<" ";
    }
    for (int i = 1; i < n-1; i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            cout<<a[i]<<" ";
        }
    }
    if(a[n-2]<a[n-1]){
        peak=a[n-1];
        cout<<peak<<" ";
    }
    return 0;
}

//Optimised method
int funcO(int a[], int n){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid])){
            return a[mid];
        }
        if(mid>0&&a[mid-1]>=a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
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
    // funcN(a,n);
    cout<<funcO(a,n);
    return 0;
}